class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        int size = nums.size();
        for ( i=0;i<size;i++){
            if(nums[i]==target){
                return i;
            }
            if(nums[i]>target){
                break;
            }
        }
        return i;
        
    }
};