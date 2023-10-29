import java.util.*;

class Solution {

    public int[][] setRow(int i, int[][] arr) 
    {
        
    }
    public void setZeroes(int[][] matrix) {
        for(int i=0;i<matrix.length;i++)
        {
            for(int j=0;j<matrix[i].length;j++)
            {
                if(matrix[i][j] == 0)
                {
                    setRow(matrix, i);
                    setCol(matrix,j);
                }   
            }
        }
    }
}
public class Solution1 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[][] arr = new int[n][m];
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }
        Solution sol = new Solution();
        sol.setZeroes(arr);
    }
}