class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        queue<int> q;
        int ans=0;
        int n = grid.size();
        int m = grid[0].size();
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(!grid[i][j])
                    continue;
                int area = 1;
                grid[i][j] = 0;
                q.push(i*m+j);
                while(q.size()) {
                    int t = q.front();
                    q.pop();
                    int ii = t/m;
                    int jj = t%m;
                    for(int k=0; k<4; k++) {
                        int ix = ii+dx[k];
                        int jy = jj+dy[k];
                        if(ix>=0 && ix<n && jy>=0 && jy<m && grid[ix][jy]) {
                            grid[ix][jy] = 0;
                            area++;
                            q.push(ix*m+jy);
                        } 
                    }
                }
                ans = max(ans,area);
            }
        }
        return ans;
    }
};
