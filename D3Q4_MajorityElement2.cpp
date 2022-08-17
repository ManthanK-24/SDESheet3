 class Solution {
 public:
     vector<int> majorityElement(vector<int>& nums) {
        
         int y=-1, z=-1, cy=0,cz=0;
         for(auto x:nums)
         {
             if(x==y)cy++;
             else if(x==z)cz++;
             else if(cy==0) y=x, cy=1;
             else if(cz==0) z=x, cz=1;
                else cy--, cz--;
        }
         cy=0; cz=0;
         for(auto x:nums)
         {
             if(x==y)cy++;
             else if(x==z)cz++;
         }
         int sz= nums.size();
         vector<int> ans;
         if(cy> sz/3)ans.push_back(y);
         if(cz> sz/3)ans.push_back(z);
         return ans;
     }
 };