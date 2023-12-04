class Solution {
public:
    string largestGoodInteger(string s) {
        int n=s.size(),mx=-1;
        for(int i=0;i<n-2;i++){
           if(s[i]==s[i+1] and s[i]==s[i+2]){
             int temp=s[i]-'0';
             mx=max(mx,temp);
           }
        }
      if(mx==-1)return "";
      else return string(3,'0'+mx);
    }
};
