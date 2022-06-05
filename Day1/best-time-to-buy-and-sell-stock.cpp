class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mi[n],ma[n];
        int x=INT_MAX;
        for(int i=0; i<n;i++){
            x=min(prices[i],x);
            mi[i]=x;
        }
        int y=INT_MIN;
        for(int i=n-1; i>=0;i--){
            y=max(prices[i],y);
            ma[i]=y;
        }
        int z=INT_MIN;
        for(int i=0; i<n;i++){
            ma[i]=ma[i]-mi[i];
            if(ma[i]>z){
                z=ma[i];
            }
        }
        return z;
    }
};
