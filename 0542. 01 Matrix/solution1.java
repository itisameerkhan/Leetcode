import java.util.*;

class Node {
    int first;
    int second;
    int third;
    Node(int first, int second, int third) {
        this.first = first;
        this.second = second;
        this.third = third;
    }
}
class Solution {
    public int[][] updateMatrix(int[][] matrix) {
        int rowSize = matrix.length;
        int colSize = matrix[0].length;

        int[][] visited = new int[rowSize][colSize];
        int[][] distance = new int[rowSize][colSize];
        Queue<Node> queue = new LinkedList<>();

        for(int i=0;i<rowSize;i++) {
            for(int j=0;j<colSize;j++) {
                if(matrix[i][j] == 0) {
                    visited[i][j] = 1;
                    queue.add(new Node(i,j,0));
                }
            }
        }

        int[] delRow = {-1,0,1,0};
        int[] delCol = {0,1,0,-1};

        while(!queue.isEmpty()) {
            int row = queue.peek().first;
            int col = queue.peek().second;
            int steps = queue.peek().third;

            queue.remove();

            distance[row][col] = steps;

            for(int i=0;i<4;i++) {
                int nRow = row + delRow[i];
                int nCol = col + delCol[i];

                if(nRow >=0 && nCol >=0 && nRow < rowSize && nCol < colSize && visited[nRow][nCol] == 0) {
                    visited[nRow][nCol] = 1;
                    queue.add(new Node(nRow, nCol, steps+1));
                }
            }
        }
        return distance;
    }
}

public class solution1 {
    public static void main(String[] main) {
        int[][] matrix = {{0,0,0},
                          {0,1,0},
                          {1,1,1}};
        
        Solution sol = new Solution();
        int[][] result = sol.updateMatrix(matrix);
        for(int i=0;i<result.length;i++) {
            for(int j=0;j<result[i].length;j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }
}