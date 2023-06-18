class Solution {
public:
    int titleToNumber(string ct) {
        int result=0;
        int n=ct.length();
        int cn=26;
        for (int i=0;i<n;i++){
            int d= ct[i] -'A'+ 1;
            result = result*cn+d;
        }
        return result;
    }
};
