class Solution {
public:
    bool isPowerOfFour(int n) {
      double a =log(n)/log(4);
      if(!n)return false;
      if ( floor(a) == ceil(a) )return true;
      else return false;
    }
};
