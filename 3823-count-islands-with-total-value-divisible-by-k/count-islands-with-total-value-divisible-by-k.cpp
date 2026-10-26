class Solution {
public:
long long dfs(int i,int j, vector<vector<int>>& grid,vector<vector<int>>& vis)
{
    int m=grid.size();
    int n=grid[0].size();

     if (i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || vis[i][j]) 
        {
            return 0;
        }
    vis[i][j]=1;
    long long sum=grid[i][j];
    sum+=dfs(i+1,j,grid,vis);
    sum+=dfs(i-1,j,grid,vis);
    sum+=dfs(i,j+1,grid,vis);
    sum+=dfs(i,j-1,grid,vis);

    return sum;




}
    int countIslands(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>> vis(m,vector<int>(n, 0));
        int ans=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]!=0 && !vis[i][j])
                {
                    long long sum=dfs(i,j,grid,vis);
                    if(sum%k==0)
                    ans++;

                }
            }
        }
        return ans;

    }
};