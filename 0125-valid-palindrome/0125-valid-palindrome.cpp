class Solution {
public:
    bool isPalindrome(string s) {
         for (char &ch : s) {
            ch = tolower(ch);
        }
        s.erase(remove_if(s.begin(), s.end(),
                          [](char ch) {
                              return !isalnum(ch);
                          }),
                s.end());
     int i = 0;
int j = s.size() - 1;

while (i < j) {
    if (s[i] == s[j]) {
        i++;
        j--;
    } else {
        return false;
    }
}

return true;
    }
};