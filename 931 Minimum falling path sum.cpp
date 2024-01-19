class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
    int row=matrix.size();
    int col=matrix[0].size();

  for (int r=1; r<row; ++r) {
     for (int c=0; c<col; ++c) {
       int prev_row=matrix[r-1][c];
       int prev_col=(c>0) ? matrix[r-1][c-1]:INT_MAX;
       
       int next_col=(c<col-1) ? matrix[r-1][c+1]:INT_MAX;
       
       matrix[r][c]+=min(prev_row,min(prev_col,next_col));
         }
      }

    return *min_element(matrix.back().begin(),matrix.back().end());
      
    }
};
