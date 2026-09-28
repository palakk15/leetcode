class Solution {
public:
    void solve(int index,int k,int n,vector<int>& current,vector<vector<int>>& ans)
    {
        if(current.size()==k)
        {
            if(n==0)
            {
                ans.push_back(current);
            }
            return;
        }
        for(int i=index;i<=9;i++)
        {
            if(i>n)
            {
                break;
            }
            current.push_back(i);
            solve(i+1,k,n-i,current,ans);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>current;
        solve(1,k,n,current,ans);
        return ans;
        
    }
};