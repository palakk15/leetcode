class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        for(int j=0;j<nums.size();j++)
            v.push_back({nums[j],j});

        sort(v.begin(),v.end());
        vector<pair<int,int>> ans;
        int i=v.size()-1;

        while(k>0 && i>=0) {
            ans.push_back(v[i]);
            k--;
            i--;
        }

        sort(ans.begin(),ans.end(),[](auto a,auto b) {
            return a.second<b.second;
        });

        vector<int> result;
        for(auto x:ans)
            result.push_back(x.first);

        return result;
    }
};