class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            zero++;
            else if (nums[i]==1)
            one++;
            else
            two++;
        }
        int idx=0;
        while(zero--)
        nums[idx++]=0;
        while(one--)
        nums[idx++]=1;
        while(two--)
        nums[idx++]=2;
    }
};