class Solution {
public:
    int getLastMoment(int n, vector<int>& l, vector<int>& r) {
        int ans=0;
        for(int i=0;i<l.size();i++)ans=max(l[i],ans);
        for(int i=0;i<r.size();i++)ans=max(n-r[i],ans);
        return ans;
    }
};
