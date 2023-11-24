import java.util.*;

class Solution {
    public int addDigits(int num) {
        int sum=0;
        while(num>0)
        {
            sum += num%10;
            num /=10;
            
            if(num==0 && sum>9)
            {
                num=sum;
                sum=0;
            }
        }
        return sum;
        
    }
}
public class solution1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        Solution sol = new Solution();
        System.out.println(sol.addDigits(num));
        sc.close();
    }
}