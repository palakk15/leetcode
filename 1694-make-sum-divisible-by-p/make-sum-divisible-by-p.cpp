class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sum=accumulate(nums.begin(),nums.end(),0LL);
        int rem=sum%p;

        if(rem==0)
        return 0;

        unordered_map<int,int>mp;
        mp[0]=-1;

        int n=nums.size();
        int ans=n;
        long long prefix=0;

        for(int i=0;i<n;i++)
        {
            prefix=(prefix+nums[i])%p;

            int need=(prefix-rem+p)%p;

            if(mp.count(need))
            ans=min(ans,i-mp[need]);

            mp[prefix]=i;
        }

        if(ans==n)
        return -1;

        return ans;
    }
};