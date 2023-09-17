import java.math.BigInteger;

class Solution {
    public String multiply(String num1, String num2) {
        BigInteger result = new BigInteger(num1).multiply(new BigInteger(num2));
        return result.toString();
    }
}
public class solution1 
{
    public static void main(String[] args)
    {
        String num1 = "498828660196";
        String num2 = "840477629533";
        Solution sol = new Solution();
        System.out.println(sol.multiply(num1, num2));
    }
}
