class Solution {
public:
    long long maxRunTime(int m, vector<int>& bat) {
      sort(bat.begin(),bat.end());
        long long s=0,ans=0;
        int n=bat.size();
        for(int i=0;i<n;i++)s+=bat[i];
        long long r=s/m+1,l=bat[n-m];
        while(l<r){
          long long mid=(l+r)/2,k=n-1;;
          while(k>=0 and bat[k]>=mid)k--;
          long long temp=0,rem=m-(n-k-1);
          while(k>=0){
            temp+=bat[k];
            k--;
          }
          if(rem<=0||rem*mid<=temp){
            ans= max (mid,ans);
            l=mid+1;
          }
          else r=mid;
        }
        return ans;
    }
};
