class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
          mp[s[i]]++;
        }
        int st=0,e=0;
        unordered_set<string>stt;
        for(char i='a';i<='z';i++){
          if(mp[i]>=2){
            for(int j=0;j<n;j++){
              if(s[j]==i){
                st=j;
                break;
              }
            }
            for(int j=n-1;j>st;j--){
              if(s[j]==i){
                e=j;
                break;
              }
            }
            for(int j=st+1;j<e;j++){
              string t="";
              t+=s[st];
              t+=s[j];
              t+=s[e];
              stt.insert(t);
            }
          }
        }
        return stt.size();
    }
};
