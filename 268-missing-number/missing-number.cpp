class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xxor=0;
        for(int i=0;i<nums.size();i++)
        {
            xxor^=i;
            xxor^=nums[i];
        }
        return xxor^nums.size();
    }
};