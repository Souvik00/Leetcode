class Solution {
public:
    int minOperations(vector<int>& a) {
        int n=a.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            
        }
        int ans=0;
        for(auto it :mp){
            if(it.second==1)return -1;
            if(it.second%3==0)ans+=(it.second/3);
            else ans+=(it.second/3+1);
            
        }
        return ans;
    }
};
