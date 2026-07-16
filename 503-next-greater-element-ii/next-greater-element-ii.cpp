class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < n; i++) {

            int next = -1;

            
            for(int j = 1; j < n; j++) {

                int index = (i + j) % n;

                if(nums[index] > nums[i]) {
                    next = nums[index];
                    break;
                }
            }

            ans.push_back(next);
        }

        return ans;
    }
};