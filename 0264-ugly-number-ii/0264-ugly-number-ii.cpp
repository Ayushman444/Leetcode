class Solution {
public:
    int dp[2000];
    int p1 = 0 , p2 = 0 , p3 = 0;
    int solve(int i , int n){
        if(i==n) return dp[n-1];
        int x2 = dp[p1]*2;
        int x3 = dp[p2]*3;
        int x5 = dp[p3]*5;
        dp[i] = min({x2,x3,x5});
        if(dp[i]==x2) p1++;
        if(dp[i]==x3) p2++;
        if(dp[i]==x5) p3++;
        return solve(i+1,n);
    }
    int nthUglyNumber(int n) {
        dp[0] =1;
        return solve(1,n);
    }
};