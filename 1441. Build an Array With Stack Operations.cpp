class Solution {
public:
    vector<string> buildArray(vector<int>& v, int n) {
        map<int,int>mp;
        vector<string>ans;
        int mx=0;
        for(int i=0;i<v.size();i++){
          mp[v[i]]++;
          mx=max(v[i],mx);
        }
        for(int i=1;i<=n;i++){
          if(i<=mx){
            ans.push_back("Push");
          if(!mp[i]){
            ans.push_back("Pop");
          }
          }
        }
        return ans;
    }
};
