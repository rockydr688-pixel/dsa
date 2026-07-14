class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0, count = 0;

        for (char c : s) {
            if (c == '(') {
                count++;

                if (count > maxDepth) {
                    maxDepth = count;
                }
            }
            else if (c == ')') {
                count--;
            }
        }

        return maxDepth;
    }
};