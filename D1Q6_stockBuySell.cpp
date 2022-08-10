class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mxsofar=0,mxcur=0;
        for(int i=1;i<prices.size();i++)
        {
            mxcur = max(0,mxcur += prices[i]-prices[i-1]);
            mxsofar = max(mxsofar,mxcur);
        }
        return mxsofar;
    }
};