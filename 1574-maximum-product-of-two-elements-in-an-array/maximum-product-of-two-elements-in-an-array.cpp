class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l1=INT_MIN;
        int l2=l1;
        for(int i=0;i<nums.size();i++)
        {
            // Largest
            if(nums[i]>l1)
            {
                l2=l1;
                l1=nums[i];
            }
            else if(nums[i]>l2)
            l2=nums[i];
        }
        return (l1-1)*(l2-1);
    }
};