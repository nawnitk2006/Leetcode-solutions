class Solution {
public:
    string reverseWords(string s) {

        string temp = "";
        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ' ') {
                temp.push_back(s[i]);
            }
            else {
                if (!temp.empty()) {

                    if (ans.empty())
                        ans = temp;
                    else
                        ans = temp + " " + ans;

                    temp.clear();
                }
            }
        }
        // for last word
        if (!temp.empty()) {
            if (ans.empty())
                ans = temp;
            else
                ans = temp + " " + ans;
        }

        return ans;
    }
};