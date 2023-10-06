class Solution {
public:
    int integerBreak(int n) {
        int ans=0;
        if(n<=3)return n-1;
        for(int k=2;k<=min(n/2,29);k++){
            int res=pow(n/k+1,n%k)*pow(n/k,k-n%k);
            ans=max(res,ans);
           // cout<<ans<<endl;
        }
        return ans;
    }
};
