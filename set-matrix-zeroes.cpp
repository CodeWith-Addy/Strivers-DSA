class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int x= m.size();
        int y= m[0].size();
        int a[y];
        int b[x];
        
        for(int i=0; i<x;i++){
            int c=1;
            for(int j=0; j<y;j++){
                c=c*m[i][j];
                if(c!=0){
                    c=1;
                }
            }
            b[i]=c;
        }
        for(int i=0; i<y;i++){
            int c=1;
            for(int j=0; j<x;j++){
                c=c*m[j][i];
                if(c!=0){
                    c=1;
                }
            }
            a[i]=c;
        }
        
        for(int i=0; i<x;i++){
            if(b[i]==0){
                for(int j=0; j<y;j++){
                    m[i][j]=0;
                }
            }
        }
        
        for(int i=0; i<y;i++){
            if(a[i]==0){
                for(int j=0; j<x;j++){
                    m[j][i]=0;
                }
            }
        }
    }
};
