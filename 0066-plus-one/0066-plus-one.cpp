class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {

            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            else{
               // digits[i]==9
            digits[i] = 0;
            }
        }

        // if in digits all 9 then all time 9 replace to 0 and then
        // [0,0,0] so at the begin add 1
        digits.insert(digits.begin(), 1);

        return digits;
    }
};
