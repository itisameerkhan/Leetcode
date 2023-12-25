import java.util.*;

class Solution {
    boolean[][] visited;

    public boolean exist(char[][] board, String word) {
        int rowLength = board.length;
        int colLength = board[0].length;

        visited = new boolean[rowLength][colLength];

        for(int i=0;i<rowLength;i++) {
            for(int j=0;i<colLength;j++) {
                if(board[i][j] == word.charAt(0) && traverse(board, word, i, j, 0)) 
                return true;
            }
        }
        return false;
    }
    public boolean traverse(char[][] board, String word, int row, int col, int index) {
        if(index == word.length()) return true;
        if(row < 0 || row >= board.length || col < 0 || col >= board[row].length || word.charAt(index) != board[row][col] || visited[row][col] || index >= word.length())
        return false;

        visited[row][col] = true;

        if(traverse(board, word, row+1, col, index+1) ||
           traverse(board, word, row-1, col, index+1) || 
           traverse(board, word, row, col+1, index+1) ||
           traverse(board, word, row, col-1, index+1)) return true;

        visited[row][col] = false;
        return false;
    }
}

public class solution1 {
    public static void main(String[] args) {
        char[][] board = {{'A', 'B', 'C' ,'E'},
                          {'S', 'F', 'C', 'S'},
                          {'A', 'D', 'E', 'E'}};

        String word = "ABCB";
        Solution sol = new Solution();
        if(sol.exist(board, word)) System.out.println("TRUE");
        else System.out.println("FALSE");
    }
}