class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
        {
            int n = nums.size();
            vector<int> ans(n);
            ans[n-1] = 1;
            for(int i =n-2;i>=0;i--)
            {
                ans[i] = ans[i+1] * nums[i+1];
            }

            int left = 1;
            for(int i=0; i<n; i++)
            {
                ans[i] = ans[i] * left;
                left = left * nums[i];

            }
        return ans;

        }
};