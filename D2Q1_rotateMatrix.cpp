class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(NULL);cin.tie(NULL);
    }
    void rotate(vector<vector<int>>& mat) {
        
        reverse(mat.begin(),mat.end());
        for(int i=0;i<mat.size();i++)
        {
            for(int j=i+1;j<mat[i].size();j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        /*
        for anti clock 
        for(int i=0;i<mat.size();i++)reverse(mat[i].begin(),mat[i].end());
        for(int i=0;i<mat.size();i++)
        {
           for(int j=i+1;j<mat[i].size();j++)
           {
             swap(mat[i][j],mat[j][i]);
           }
        }
        */
    }
};