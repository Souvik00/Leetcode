class Solution {
private:
string ans;  
public:
    string largestOddNumber(string s) {
      bool flag=false;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
          if(s[i]&1){
            flag =true;
          }
          if(flag)ans+=s[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
