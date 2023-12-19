class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
  int row=img.size();
  int col=img[0].size(); vector<vector<int>>result(row,vector<int>(col,0));
for (int i=0;i<row;++i) {
for(int j=0;j<col;++j) {
   int sum=0;
   int count=0;
for(int x=max(0,i-1);x<=min(row-1,i+1);++x) {
   for(int y=max(0,j-1);y<=min(col-1,j+1);++y) {
       sum+=img[x][y];
        count++;
            }
     }
 result[i][j]=sum/count;
      }
 }
 return result;   
    }
    
};
