class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int a = 0; a < 32; a++) {
            int count = 0;

            for (int num : nums) {
                if (num & (1 << a))
                    count++;
            }

            if (count % 3)
                ans |= (1 << a);
        }

        return ans;
    }
};