class Solution {
public:
int solve(vector<int>& nums, int goal){
     int l=0,r=0,count=0,sum=0;
        if(goal<0) return 0;
        while(r<nums.size()){
            sum+=nums[r]%2;
            while(sum>goal){
                sum-=nums[l]%2;
                l++;
            }
            count+=r-l+1;
            r++;
        }
        return count;

}
    int numSubarraysWithSum(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
       
    }
};