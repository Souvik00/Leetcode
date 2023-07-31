class Solution {
public:
    int dx[4][2]={{100,0},{75,25},{50,50},{25,75}};
    double dfs(int a,int b,vector<vector<double>>&dp){
        if(a<=0 and b<=0)return .5;
        if(a<=0 and b>0)return 1;
        if(a>0 and b<=0)return 0;
        if(dp[a][b]!=-1)return dp[a][b];
        double sum=0;
        for(int i=0;i<4;i++){
            sum+=dfs(a-dx[i][0],b-dx[i][1],dp);
        }
        return dp[a][b]=sum/4;
    }
    double soupServings(int n) {
        if(n>=5000)return 1;
        vector<vector<double>>dp(n+1,vector<double>(n+1,-1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++)dp[i][j]=-1;
        }
        return dfs(n,n,dp);
    }
};
