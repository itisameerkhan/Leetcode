class solution1 
{
    public static boolean checkPalindrome(String s)
    {
        int start=0;
        int end = s.length()-1;
        while(start<end)
        {
            if(s.charAt(start)!=s.charAt(end)) return false;
            start++;
            end--;
        }
        return true;
    }
    public static String longestPalindrome(String s)
    {
        String t;
        for(int i=s.length();i>0;i--)
        {
            for(int j=0;j<s.length()-i+1;j++)
            {
                t = s.substring(j,i+j);
                if(checkPalindrome(t))
                return t;
            }
        }
        return ""+s.charAt(0);
    }
    public static void main(String[] args)
    {
        String s = "babad";
        System.out.println(longestPalindrome(s));
    }
}