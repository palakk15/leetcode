class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>mp;
        int ans=0;
        int sum=0;
        for(int i=0;i<banned.size();i++)
        {
            mp.insert(banned[i]);

        }
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)==mp.end())
            {
                sum=sum+i;
                if(sum>maxSum)
                break;
                ans++;
            }
            
        }
        return ans;
        
    }
};