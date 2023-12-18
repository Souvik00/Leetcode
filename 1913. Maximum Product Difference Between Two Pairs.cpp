class Solution {
public:
    int maxProductDifference(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        return (v[n-1]*v[n-2])-(v[0]*v[1]);
    }
};
