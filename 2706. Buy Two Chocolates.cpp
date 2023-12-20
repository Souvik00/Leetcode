class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int d=money - (prices[0]+prices[1]);
        if(d>=0)return d;
        else return money;
    }
};
