class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool dup = false;
       sort(nums.begin(),nums.end(),greater<int>());
       vector<int>::iterator it;
       for(it=nums.begin();it<nums.end()-1;it++)
       {
          if(*it == *(it+1))
            dup = true;

       }
       return dup;

    }
};