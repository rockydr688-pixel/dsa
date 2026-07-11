class Solution {
public:
    void solve(vector<int>& nums, int start, vector<vector<int>>& res) {
        if(start == nums.size()) {
            res.push_back(nums);
            return;
            
        }
        unordered_set<int> used; 
        for(int i = start; i < nums.size(); i++) {
            if(used.count(nums[i])) continue; 
            used.insert(nums[i]);
            swap(nums[i], nums[start]);
            solve(nums, start + 1, res);
            swap(nums[i], nums[start]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        solve(nums, 0, res);
        return res;
    }
};
