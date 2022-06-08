class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0; i<n.size();i++){
            mp[(t-n[i])]=i+1;   
        }
        for(int i=0; i<n.size();i++){
            if(mp[n[i]]>0 && (mp[n[i]]-1)!=i){
                v.push_back(i);
                v.push_back(mp[n[i]]-1);
                break;
            }
        }
        return v;
    }
};
