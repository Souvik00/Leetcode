class Solution {
  private:
  int mod = 1000000007;
  int rev(int num){
    int res=0;
    while(num){
      res*=10;
      res+=num%10;
      num/=10;
    }
    return res;
  }
public:
    int countNicePairs(vector<int>& v) {
        int n=v.size();
        unordered_map<long long,long long>mp;
        for(int i=0;i<n;i++){
          mp[v[i]-rev(v[i])]++;
        }
        long long res=0;
        for(auto it:mp){
          res+=((((it.second)*(it.second-1))/2)%mod);
        }
        res%=mod;
        return (int)res;

    }
};
