class Solution {
public:
vector<int>sub;
        vector<vector<int>>res;
void solve(vector<int>nums,int start){
    res.push_back(sub);
    for(int i=start;i<nums.size();i++){
        if(i>start && nums[i]==nums[i-1]) continue;
        sub.push_back(nums[i]);
        solve(nums,i+1);
        sub.pop_back();
    }

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        solve(nums,0);
        return res;
        
    }
};