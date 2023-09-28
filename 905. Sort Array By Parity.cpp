class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        int n=a.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
          if(a[i]%2==0)ans.push_back(a[i]);
        }
        for(int i=0;i<n;i++){
          if(a[i]&1)ans.push_back(a[i]);
        }
        return ans;
    } 
};
