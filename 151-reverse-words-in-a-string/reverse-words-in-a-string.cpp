class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string ans = "";

        for (char c : s) {
            if (c != ' ') {
                word += c;
            }
            else if (word != "") {
                if (ans != "")
                    ans = word + " " + ans;
                else
                    ans = word;

                word = "";
            }
        }

        if (word != "") {
            if (ans != "")
                ans = word + " " + ans;
            else
                ans = word;
        }

        return ans;
    }
};