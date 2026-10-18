class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int>points(maxi + 1, 0);

        for(int x : nums) 
        {
            points[x] += x;
        }
        vector<int> dp(maxi + 1, 0);
        if(maxi >= 1)
            dp[1] = max(points[0], points[1]);

        for(int i = 2; i <= maxi; i++) {
            int pick = points[i] + dp[i-2];
            int notPick = dp[i-1];

            dp[i] = max(pick, notPick);
        }

        return dp[maxi];
    }
};