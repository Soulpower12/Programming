class Solution {
public:
    int climbStairs(int n) {
        int prev = 1;
        int cur =1;
        int ans =0;
        if(n==1)
            return 1;
        for(int i=2;i<=n;i++)
        {
            ans = cur + prev;
            prev = cur;
            cur = ans;

        }
        return ans;
    }
};