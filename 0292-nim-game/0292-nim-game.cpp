class Solution {
public:
    bool canWinNim(int n) {
        while(n > 3) {
            n = n - 4;
        }

        if(n == 0) {
            return false;
        }
        else {
            return true;
        }
    }
};