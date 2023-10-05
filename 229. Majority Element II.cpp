class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int n=a.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        vector<int>ans;
        for(auto it:mp){
            if(it.second>n/3)ans.push_back(it.first);
        }
        return ans;
    }
};
