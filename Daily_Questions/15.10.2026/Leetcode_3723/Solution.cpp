class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        int n = num;

        if(sum > 9 * num){
            return ans;
        }

        while (num--) {
            if (sum > 9) {
                ans += '9';
                sum -= 9;
            } else {
                ans += (sum + '0');
                sum = 0;
            }
        }

        if (ans.length() < n) {
            int zeroes = n - ans.length();
            while (zeroes > 0) {
                ans += '0';
                zeroes--;
            }
        }

        return ans;
    }
};