class Solution {
    public boolean detectCapitalUse(String word) {
        int n = word.length();
        int flag=1;
        if(word.charAt(0)>='A' && word.charAt(0)<='Z')
        {
            flag=1;
            for(int i=1;i<n;i++)
            {
                if(word.charAt(i)>='A' && word.charAt(i)<='Z')
                flag++;
            }
            if(flag==n)
            return true;
        }
        if(word.charAt(0)>='A' && word.charAt(0)<='Z')
        {
            flag=1;
            for(int i=1;i<n;i++)
            {
                if(word.charAt(i)>='a' && word.charAt(i)<='z')
                flag++;
            }
            if(flag==n)
            return true;
        }
        if(word.charAt(0)>='a' && word.charAt(0)<='z')
        {
            flag=1;
            for(int i=1;i<n;i++)
            {
                if(word.charAt(i)>='a' && word.charAt(i)<='z')
                flag++;
            }
            if(flag==n)
            return true;
        }
        return false;
    }
}
public class solution1 {
    public static void main(String[] args) {
        String s = "USA";
        Solution sol = new Solution();
        if(sol.detectCapitalUse(s)) System.out.println("true");
        else System.out.println("false");
    }
}