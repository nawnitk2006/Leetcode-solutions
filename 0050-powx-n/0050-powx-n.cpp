class Solution {
public:
    double myPow(double x, int n) {
     double ans = 1;
     long binaryform=n;
if(n<0){
    x=1/x;
    binaryform=-binaryform;
}
while (binaryform > 0) {
    if (binaryform % 2 == 1) {
        ans = ans * x;
    }

    x = x * x;
    binaryform /= 2;
}

return ans;   
    }
};