class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>mp;
        int n=words.size();
        for(int i=0;i<n;i++){
          for(int j=0;j<words[i].size();j++)
          mp[words[i][j]]++;
        }
        for(auto it:mp){
          if(it.second%n!=0)return false;
        }
        return true;
    }
};
