class Solution {
    public boolean validateRotation(int n) {
        int[] freq = new int[10];
        Arrays.fill(freq, 0);
        while(n > 0) {
            int digit=n%10;
            freq[digit] = 1;
            n/=10;
        }
        boolean v1 = false,v2=false,v3=true;
        if(freq[2]==1 || freq[5]==1 || freq[6]==1 || freq[9]==1) v1 = true;
        if(v1 == true) {
            if(freq[0]==1 || freq[1]==1 || freq[8]==1) v2 = true;
        }
        if(freq[3]==1 || freq[4]==1 || freq[7]==1) return false;
        return v1;
    }
    public int rotatedDigits(int n) {
        int index = 1, result=0;
        while(index <= n) {
            if(validateRotation(index)) result++;
            index++;
        }
        return result;
    }
}