class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[0];
        // Detect Cycle
        do{
            slow=nums[slow]; //+1
            fast=nums[nums[fast]]; //+2
        }while(slow!=fast);

        // Detect Staring Point(Duplicate)
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow]; //+1
            fast=nums[fast]; //+1
        }
        return slow;
    }
};