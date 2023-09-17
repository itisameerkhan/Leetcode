import java.util.*;

class Solution 
{
    int nCrFunction(int n,int r)
    {
        int result = 1;
        for(int i=0;i<r;i++)
        {
            result = result * (n - i);
            result = result / (i + 1);
        }
        return result;
    }
    List<List<Integer>> generate(int n)
    {
        List<List<Integer>> output = new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            List<Integer> list = new ArrayList<>();
            for(int j=0;j<=i;j++)
            {
                list.add(nCrFunction(i,j));
            }
            output.add(list);
        }
        return output;
    }
}
public class Solution1 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Solution sol = new Solution();
        List<List<Integer>> output = sol.generate(n);
        for(List<Integer> list: output)
        {
            for(Integer i: list)
            {
                System.out.print(i + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}