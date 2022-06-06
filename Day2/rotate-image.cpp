class Solution {
public:
    int temp;
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        for(int i=0; i<matrix.size()/2;i++){
            for(int j=0; j<matrix.size();j++){
                temp=matrix[j][i];
                matrix[j][i]=matrix[j][matrix.size()-i-1];
                matrix[j][matrix.size()-i-1]=temp;
            }
        }
    }
    
    void transpose(vector<vector<int>>& matrix){
        for(int i=0; i<matrix.size();i++){
            for(int j=i; j<matrix.size();j++){
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
};
