class Solution {
public:
    string sortVowels(string s) {
       int n=s.size();
       vector<char>v;
       for(int i=0;i<n;i++) {
         if(s[i]=='A' or s[i]=='a' or s[i]=='E' or s[i]=='e' or s[i]=='I' or s[i]=='i' or s[i]=='O' or s[i]=='o' or s[i]=='U' or s[i]=='u')v.push_back(s[i]);
         
       }
       sort(v.begin(),v.end());
       int j=0;
       for(int i=0;i<n;i++){
         if(s[i]=='A' or s[i]=='a' or s[i]=='E' or s[i]=='e' or s[i]=='I' or s[i]=='i' or s[i]=='O' or s[i]=='o' or s[i]=='U' or s[i]=='u'){
           s[i]=v[j];
           j++;
         }
       }
       return s;
    }
};
