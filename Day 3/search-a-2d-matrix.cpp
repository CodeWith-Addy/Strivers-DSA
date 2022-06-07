class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int i=0,j=mat[0].size()-1;
        while(i<mat.size() && j>=0){
            if(mat[i][j]==t){
                return true;
            }
            else if(mat[i][j]>t){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};
