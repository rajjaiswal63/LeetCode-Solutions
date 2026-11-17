class Solution {
public:
    double sol(double x, long long n){
        if(n==0) return 1;
        if(n<0) return 1/sol(x,-n);
        if(n%2==0) return sol(x*x,n/2);
        return x * sol(x*x,(n-1)/2);
    }
    double myPow(double x, int n) {
        return sol(x,(long long)n);
    }
};

//time O(log N)