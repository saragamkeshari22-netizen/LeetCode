
class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size(), m = num2.size();
        vector<int> v(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int x = (num1[i] - '0') * (num2[j] - '0');
                x += v[i + j + 1];

                v[i + j + 1] = x % 10;
                v[i + j] += x / 10;
            }
        }

        string s = "";
        for (int x : v) {
            if (s.size() > 0 || x != 0)
                s += char(x + '0');
        }

        return s.empty() ? "0" : s;
    }
};
