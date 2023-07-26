class Solution {
public:
    int minSpeedOnTime(vector<int>& dis, double hour) {
        int l=1,r=10000007,n=dis.size();
        
        while(l<r){
            double t=0;
            int mid=(l+r)/2;
            for(int i=0;i<n;i++){
             if(t>(int)t)t=(double)((int)t+1);
            t+=((double)dis[i]/(double)mid);
           
         }
         if(t>hour)l=mid+1;
         else r=mid;
        }
        if(l>10000000)return -1;
        else return l;
    }
};
