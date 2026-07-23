class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        vector<int>tri = triangle.back();

        for (int i = triangle.size() - 2; i >= 0; i--) {

            for (int j = 0; j <= i; j++) {
                tri[j] = triangle[i][j] + min(tri[j], tri[j + 1]);
            }
        }

        return tri[0];
    }
};