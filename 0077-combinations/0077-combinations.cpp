class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;

        vector<int> v;

        solve(1, n, k, v, ans);

        return ans;
    }

    void solve(int start, int n, int k, vector<int>& v,
               vector<vector<int>>& ans) {

        if (v.size() == k) {
            ans.push_back(v);
            return;
        }

        for (int i = start; i <= n; i++) {
            v.push_back(i);

            solve(i + 1, n, k, v, ans);

            v.pop_back();
        }
    }
};