class Solution {
public:
    int dp[1002][1002];
    int dfs(string &s1,string &s2,int n,int m){
        if(m==0){
            int sum1=0;
            for(int i=0;i<n;i++)sum1+=(int)s1[i];
            return dp[n][m]=sum1;
        }
        if(n==0){
            int sum2=0;
            for(int i=0;i<m;i++)sum2+=(int)s2[i];
            return dp[n][m]=sum2;
        }
        if(dp[n][m]!=0)return dp[n][m];
        if(s1[n-1]==s2[m-1])return dp[n][m]=dfs(s1,s2,n-1,m-1);
        int ans1=s1[n-1]+dfs(s1,s2,n-1,m);
        int ans2=s2[m-1]+dfs(s1,s2,n,m-1);
        return dp[n][m]=min(ans1,ans2);
        

    }
    int minimumDeleteSum(string s1, string s2) {
       int m=s2.size();
       int n=s1.size();
       for(int i=0;i<n;i++)for(int j=0;j<n;j++)dp[i][j]=0;
       return dfs(s1,s2,n,m);
    }
};
