class Solution {
public:

    void row(vector<vector<int>>& matrix, int i, int n,int m){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -10;
            }
        }
    }

    void column(vector<vector<int>>& matrix, int j, int n,int m){
        for(int i = 0; i < n; i++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -10;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    row(matrix, i, n, m);
                    column(matrix, j, n, m);
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == -10){
                    matrix[i][j] = 0;
                }
            }
        }
    }

};
