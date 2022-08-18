class Solution {
public:
    int cnt = 0;
    void merge(vector<int>& nums, int start,int mid,int end)
    {
        int i = start, j = mid+1;
        
        while(i<=mid && j<=end)
        {
            if((long)nums[i]> (long) nums[j]*2)
            {
                cnt += (mid - i +1);
                j++;
            }
            else
                i++;
        }
        
        sort(nums.begin() + start, nums.begin() + end +1);
        return;
        
    }
    void mergesort(vector<int>& nums, int l,int r)
    {
        if(l>=r)return;
        
        int mid = l + ((r-l)>>1);
        mergesort(nums,l,mid);
        mergesort(nums,mid+1,r);
        
        merge(nums,l,mid,r);
        
    }
    int reversePairs(vector<int>& nums) {
        
        if(!nums.size())return 0;
        
        cnt=0;
        mergesort(nums,0,nums.size()-1);
        
        return cnt;
    
    }
};