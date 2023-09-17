let lengthOfLongestSubstring = function(s)
{
    let maxLength = 0;
    let currString = [];
    for(let i=0;i<s.length;i++)
    {
        currIndex = currString.indexOf(s[i]);
        if(currIndex != -1)
        {
            currString.splice(0,currIndex+1);
        }
        currString.push(s[i]);
        maxLength = Math.max(maxLength,currString.length);
    }
    return maxLength;
};

let s = "abcabcbb";
console.log(lengthOfLongestSubstring(s));