class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row= matrix.size(), col=matrix[0].size();
        vector<bool>rowv(row,false);
        vector<bool>colv(col,false);

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                  rowv[i]=true;
                  colv[j]=true;
                }
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(rowv[i]==true) matrix[i][j]=0;
                if(colv[j]==true) matrix[i][j]=0;
            }
        }
    }
};