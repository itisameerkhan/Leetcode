class Solution {
    public String reverseVowels(String s) {
        char[] arr = s.toCharArray();
        int l = 0;
        int r = arr.length-1;
        while(l<r)
        {
            if(arr[l]!='a' && arr[l]!='e' && arr[l]!='i' && arr[l]!='o' && arr[l]!='u' &&
               arr[l]!='A' && arr[l]!='E' && arr[l]!='I' && arr[l]!='O' && arr[l]!='U')
            l++;
            else if(arr[r]!='a' && arr[r]!='e' && arr[r]!='i' && arr[r]!='o' && arr[r]!='u' &&
                    arr[r]!='A' && arr[r]!='E' && arr[r]!='I' && arr[r]!='O' && arr[r]!='U')
            r--;
            else
            {
                char t = arr[l];
                arr[l] = arr[r];
                arr[r] = t;
                l++;
                r--;
            }
        }
        String ans = "";
        for(int i=0;i<arr.length;i++)
        {
            ans += arr[i];
        }
        return ans;
    }
}
public class solution1 {
    public static void main(String[] args) {
        String s = "hello";
        Solution sol = new Solution();
        System.out.println(sol.reverseVowels(s));
    }
}