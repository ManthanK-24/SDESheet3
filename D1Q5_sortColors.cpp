class Solution {
public:
    void sortColors(vector<int>& nums) {
        int wht = 0, red = 0, blue = nums.size()-1;
        
        while(wht<=blue)
        {
            if(nums[wht]==0)
            {
                swap(nums[wht],nums[red]);
                wht +=1;
                red +=1;
            }
            else if(nums[wht]==1)
            {
                wht++;
            }
            else
            {
                swap(nums[wht],nums[blue]);
                blue--;
            }
        }
    }
};