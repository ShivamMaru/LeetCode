class Solution {
public:
    double myPow(double x, long n) {
        long N = n;
        if(n<0)
            n = -1*n;
        if(n == 0)
            return 1;
        double y = myPow(x , n/2);
        double result = y*y;
        if(n % 2 == 1){
            result = result*x;
        }
        if(N < 0){
            result = 1/result;
        }
        return result;
    }
};