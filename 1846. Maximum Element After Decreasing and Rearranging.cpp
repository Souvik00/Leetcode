class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size(),res=1;
        for(int i=1;i<n;i++){
          if(v[i]>res)res++;
        }
        return res;
    }
};
