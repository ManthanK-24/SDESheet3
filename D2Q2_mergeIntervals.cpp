class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intrvl) {
        
        vector<vector<int>> ans;
        
        sort(intrvl.begin(),intrvl.end());
        ans.push_back(intrvl[0]);
        
        for(int i=1;i<intrvl.size();i++)
        {
            int sz = ans.size()-1;
            if(ans[sz][1]>=intrvl[i][0])
            {
                ans[sz][1] = max(ans[sz][1],intrvl[i][1]);
            }
            else
            {
                ans.push_back(intrvl[i]);
            }
        }
        return ans;
    }
};