import os
import urllib.request
import json
import time
import datetime
import re

username = "itisameerkhan"
session = os.environ.get("LEETCODE_SESSION")
csrf = os.environ.get("LEETCODE_CSRF_TOKEN")

if not session or not csrf:
    print("Missing LEETCODE_SESSION or LEETCODE_CSRF_TOKEN environment variables.")
    exit(1)

url = 'https://leetcode.com/graphql'
query = '''
{
  matchedUser(username: "itisameerkhan") {
    userCalendar {
      submissionCalendar
    }
  }
}
'''
headers = {
    'Content-Type': 'application/json',
    'Cookie': f'LEETCODE_SESSION={session}; csrftoken={csrf}',
    'x-csrftoken': csrf,
    'Referer': 'https://leetcode.com/itisameerkhan/',
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.124 Safari/537.36'
}

req = urllib.request.Request(url, data=json.dumps({'query': query}).encode('utf-8'), headers=headers)
try:
    with urllib.request.urlopen(req) as response:
        data = json.loads(response.read().decode())
        calendar = json.loads(data['data']['matchedUser']['userCalendar']['submissionCalendar'])
        timestamps = sorted([int(k) for k in calendar.keys()])
        
        streak = 0
        if timestamps:
            today = datetime.datetime.utcnow().date()
            active_dates = set(datetime.datetime.utcfromtimestamp(ts).date() for ts in timestamps)
            
            # Start counting from today, or yesterday if today has no submission yet
            if today in active_dates or (today - datetime.timedelta(days=1)) in active_dates:
                check_date = today if today in active_dates else today - datetime.timedelta(days=1)
                while check_date in active_dates:
                    streak += 1
                    check_date -= datetime.timedelta(days=1)
                    
        print(f"Calculated Current Streak: {streak} days")
        
        # Read the current README
        with open('README.md', 'r', encoding='utf-8') as f:
            content = f.read()
        
        # Replace existing streak if it exists
        new_content = re.sub(r'🔥 \*\*Current LeetCode Streak:\*\* \d+ days', f'🔥 **Current LeetCode Streak:** {streak} days', content)
        
        # If the streak text isn't there yet, inject it right under the stats image
        if new_content == content and '🔥 **Current LeetCode Streak:**' not in content:
            target_image = "![Ameer khan's LeetCode stats](https://leetcard.jacoblin.cool/itisameerkhan)"
            if target_image in content:
                new_content = content.replace(
                    target_image, 
                    f"{target_image}\n\n🔥 **Current LeetCode Streak:** {streak} days"
                )
            else:
                # Fallback if image is modified, just append to top
                new_content = f"🔥 **Current LeetCode Streak:** {streak} days\n\n" + content
            
        with open('README.md', 'w', encoding='utf-8') as f:
            f.write(new_content)
            
        print("Successfully updated README.md")

except Exception as e:
    print('Error while fetching data:', e)
    exit(1)
