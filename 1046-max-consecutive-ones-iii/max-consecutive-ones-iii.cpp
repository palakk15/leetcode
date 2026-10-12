class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int ans=0;
        int left=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else if(nums[i]==0 && k>0)
            {
                count++;
                k--;
            }
            else
            {
                while(k==0)
                {
                    if(nums[left]==0)
                    k++;
                    count--;
                    left++;
                }
                count++;
                k--;
            }
            ans=max(count,ans);
        }
        return ans;

        
    }
};