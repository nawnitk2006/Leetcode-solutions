class Solution {
public:
    string reverseWords(string s) {
       string ans = "";
       string temp = "";

for (int i = 0; i < s.size(); i++) {

    if (s[i] == ' ') {
        ans += temp;
        ans += ' ';
        temp.clear();
    }
    else {
        temp.insert(temp.begin(), s[i]);
    }
}
return ans += temp;        
    }
};