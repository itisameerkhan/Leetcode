import java.util.*;

class Solution
{
    public String[] key = {"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    public ArrayList<String> solve(String digits,int index,ArrayList<String> empty,String combination)
    {
        if(digits.length()==0) return empty;
        if(index == digits.length())
        {
            empty.add(combination);
            return empty;
        }
        char c = digits.charAt(index);
        String map = key[c-'1'];
        for(int i=0;i<map.length();i++)
        {
            solve(digits,index+1,empty,combination+map.charAt(i));
        }
        return empty;
    }
    public List<String> letterCombination(String digits)
    {
        ArrayList<String> a = new ArrayList<>();
        return solve(digits,0,a,"");
    }
}
public class solution1 
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Solution sol = new Solution();
        List<String> ans = new ArrayList<>();
        ans = sol.letterCombination(s);
        for(Object o: ans) System.out.println(o);
    }
}