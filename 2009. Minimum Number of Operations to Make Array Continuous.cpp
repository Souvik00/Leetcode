class Solution {
public:
    int minOperations(vector<int>& a) {
       int n=a.size();
       set<int>st;
       for(int i=0;i<n;i++)st.insert(a[i]);
       vector<int>v;
       for(auto it:st)v.push_back(it);
       int m=v.size(),j=0,ans=0;
       for(int i=0;i<m;i++){
            while(j<m and v[i]+n>v[j])j++;
            ans=max(ans,j-i);
            cout<<ans<<endl;
       }
       return n-ans;
    }
};
