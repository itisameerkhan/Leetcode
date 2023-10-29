class Solution {

    public int[][] setRow(int[][] matrix, int row, int len) {
        for(int i=0;i<len;i++) {
           if(matrix[row][i] != 0) {
                matrix[row][i] = -999;
           }
        }
        return matrix;
    }

    public int[][] setColumn(int[][] matrix, int col, int len) {
        for(int i=0;i<len;i++) {
            if(matrix[i][col] != 0) {
                matrix[i][col] = -999;
            }
        }
        return matrix;
    }

    public void setZeroes(int[][] matrix) {
        for(int i=0;i<matrix.length;i++) {
            for(int j=0;j<matrix[i].length;j++) {
                if(matrix[i][j] == 0) {
                    matrix = setRow(matrix, i, matrix[i].length);
                    matrix = setColumn(matrix, j, matrix.length);
                }
            }
        }
        // for(int i=0;i<matrix.length;i++) {
        //     for(int j=0;j<matrix[i].length;j++) {
        //         System.out.print(matrix[i][j] + " ");
        //     }
        //     System.out.println();
        // }
        for(int i=0;i<matrix.length;i++) {
            for(int j=0;j<matrix[i].length;j++) {
                if(matrix[i][j] == -999) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}