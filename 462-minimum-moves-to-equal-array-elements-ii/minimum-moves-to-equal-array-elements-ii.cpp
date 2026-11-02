class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int mid;
        int count=0;
        if(high%2==0)
        {
            mid=(low+high)/2;
        }
        else
        {
            mid=((low+high)/2)+1;
        }
        for(int i=0;i<nums.size();i++)
        {
            count=count+abs(nums[mid]-nums[i]);
        }
        return count;
        
    }
};