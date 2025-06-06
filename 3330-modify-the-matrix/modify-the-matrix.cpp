class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
    int m=matrix.size();
    int n=matrix[0].size();
    vector<vector<int>> res(matrix);
    for(int c=0;c<n;c++)
    {
     int maxv=INT_MIN;
    for(int r=0;r<m;r++)
       maxv=max(maxv,matrix[r][c]);
     for(int r=0;r<m;r++)
     {
        if(matrix[r][c]==-1){
        res[r][c]=maxv;
        }
     }
    }
     return res;
    }
};