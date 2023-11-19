class Solution {
public:
    int reductionOperations(vector<int>& v) {
        vector<int>st;
        unordered_map<int,int>mp;
        sort(v.rbegin(),v.rend());
        int n=v.size(),mn=100000;
        
        for(int i=0;i<n;i++){
          mp[v[i]]++;
          if(mp[v[i]]==1)st.push_back(v[i]);
          mn=min(mn,v[i]);
        }
        int ans=0,c=0;
        for(auto it : st){
          if(it==mn)continue;
          c+=mp[it];
          ans+=c;
          //cout<<ans<<' '<<c<<endl;
         
        }
        return ans;
    }
};
