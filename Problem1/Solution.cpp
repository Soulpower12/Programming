class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        //vector<int>::iterator ptr;
        bool found = false;
        for(int i=0; i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int sum = nums[i]+nums[j];
                if(sum == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    found = true;
                    break;
                }
            }
            if(found)
                break;     
        }
        return result;
    }
};