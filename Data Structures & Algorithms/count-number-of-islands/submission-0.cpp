class Solution {

    bool help(vector<vector<char>>& grid, int i, int j, int m, int n) {
        if(i<0 || i==n || j<0 || j==m || grid[i][j]=='0' || grid[i][j]=='2')
            return false;
        grid[i][j]='2';
        help(grid,i+1,j,m,n);
        help(grid,i,j+1,m,n);
        help(grid,i-1,j,m,n);
        help(grid,i,j-1,m,n);
        return true;
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(help(grid,i,j,m,n))
                    ans++;
            }
        }
        return ans;
    }
};
