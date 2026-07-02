class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int org=x;
        while(x>0){
            int pop=x%10;
            if (rev > INT_MAX / 10) return false;
            rev=(rev*10)+pop;
             x=x/10;
        }
        if(rev==org){
            return true;
        }
        return false;
    }
};