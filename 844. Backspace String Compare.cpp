class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size(),m=t.size();
        vector<char>v1,v2;
        for(int i=0;i<n;i++){
          if(s[i]=='#'){
            if(v1.size())v1.pop_back();          
          }
          else v1.push_back(s[i]);
        }
        for(int i=0;i<m;i++){
          if(t[i]=='#'){
            if(v2.size())v2.pop_back();          
          }
          else v2.push_back(t[i]);
        }
        if(v1==v2)return true;
        else return false;
        
    }
};
