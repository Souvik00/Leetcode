class Solution {
private:
    vector<bool>ans;
    bool check(vector<int>v,int l,int r){
     sort(v.begin()+l,v.begin()+r+1);
     int d=v[l+1]-v[l];
     for(int i=l;i<r;i++){
       if(v[i+1]-v[i]!=d)return false;
     }
     return true;
    }  
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& v, vector<int>& l, vector<int>& r) {
        int m=l.size();
        for(int i=0;i<m;i++)ans.push_back(check(v,l[i],r[i])); 
        return ans;
    }
};
