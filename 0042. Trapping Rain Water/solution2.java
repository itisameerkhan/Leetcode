import java.util.*;

public class solution2 {
    public static int trap(int[] a)
    {
        int n = a.length;
        int leftMax = a[0];
        Stack<Integer> rightMax = new Stack<>();
        rightMax.push(a[n-1]);
        for(int i=n-2;i>=2;i--)
        {
            int temp = Math.max(rightMax.peek(),a[i]);
            rightMax.push(temp);
        }
        int totWater=0;
        for(int i=1;i<n-1;i++)
        {
            int min = Math.min(rightMax.peek(),leftMax);
            int temp = min - a[i];
            totWater += Math.max(0,temp);
            rightMax.pop();
            leftMax = Math.max(leftMax, a[i]);
        }
        return totWater;
    }   
    public static void main(String[] args)
    {
        int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
        System.out.println(trap(arr));
    }
}
