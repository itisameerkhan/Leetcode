public class solution1 
{
    public static int trap(int[] a)
    {
        int n = a.length;
        int[] leftMax = new int[n];
        int[] rightMax = new int[n];
        int max=-1;
        int water=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max = a[i];
            }
            leftMax[i] = max;
        }
        max=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>max)
            {
                max = a[i];
            }
            rightMax[i] = max;
        }
        for(int i=0;i<n;i++)
        {
            water += Math.min(leftMax[i],rightMax[i]) - a[i];
        }
        return water;
    }
    public static void main(String[] args)
    {
        int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
        System.out.println(trap(arr));
    }
}
