class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int ans = 0;
        set<int> st;
        
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        vector<int> ar;
        for(auto x:st)ar.push_back(x);
        
        int curmx = 1;
        ans = 1;
        
        for(int i=1;i<ar.size();i++)
        {
            if(ar[i]==ar[i-1]+1)
            {
                curmx++;
            }
            else
            {
                ans = max(ans,curmx);
                curmx=1;
            }
            ans = max(ans,curmx);
        }
        
        return ans;
    }
};