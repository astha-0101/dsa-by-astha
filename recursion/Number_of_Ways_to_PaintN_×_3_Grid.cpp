class Solution {
public:
    static const int mod = 1e9 + 7;
    long long sum=0;
    long long abc=6;
    long long acb=6;
    int numOfWays(int n) {
        
        if(n==1)
        {
            return (acb+abc)%mod;
        }
        long long prev_abc=abc;
        long long prev_acb=acb;
        abc=(3*prev_abc + 2*prev_acb)%mod;
        acb=(2*prev_abc + 2*prev_acb)%mod;;
        sum=acb+abc;
        
        return numOfWays(n-1);
        
    }
};