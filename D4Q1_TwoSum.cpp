class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mpind;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mpind.find(target-nums[i])!=mpind.end())
            {
                return {mpind[target-nums[i]],i};
            }
            mpind[nums[i]] = i;
        }
        return {};
    }
};