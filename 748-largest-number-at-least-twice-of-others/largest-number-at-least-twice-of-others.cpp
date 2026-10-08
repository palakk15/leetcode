class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=max_element(nums.begin(),nums.end())-nums.begin();

        int largest=nums[maxi];
        int second=0;

        for(int i=0;i<nums.size();i++){
            if(i!=maxi)
            second=max(second,nums[i]);
        }

        if(largest>=2*second)
        return maxi;

        return -1;
    }
};