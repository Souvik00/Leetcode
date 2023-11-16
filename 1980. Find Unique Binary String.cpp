class Solution {
private:
  long long power(long long a, long long b){ // a raised to power b
  long long res=1;
  while(b){
    if(b&1) res=(res*a);
    b>>=1;
    a=(a*a);
  }
  return res;
}
    long long bintoint(string s)  {
      long long ans=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        ans+=(power(2,i)*(s[i]-'0'));
    }
    return ans;
  }
  string inttobin(long long a){
    string s;
    while(a){
      s+=(a%2+'0');
      a/=2;
    }
    reverse(s.begin(),s.end());
    return s;
  }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        long long n=nums.size();
        map<long long,int>mp;
        for(int i=0;i<n;i++){
          mp[bintoint(nums[i])]++;
        }
        for(auto it:mp)cout<<it.first<<' '<<it.second<<endl;
        for(int i=0;i<power(2ll,n);i++){
          if(!mp[i]){
            string t= inttobin(i);
            int k=n-t.size();
            for(int i=0;i<k;i++)t='0'+t;
            return t;
          }
        }
        return 0;
    }
};
