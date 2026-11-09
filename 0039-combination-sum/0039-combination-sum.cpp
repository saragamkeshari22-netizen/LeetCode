class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;

        solve(candidates, target, 0, v, ans);
        return ans;
    }

    void solve(vector<int>& a, int target, int i,
               vector<int>& v, vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(v);
            return;
        }

        if (i == a.size() || target < 0)
            return;

        v.push_back(a[i]);
        solve(a, target - a[i], i, v, ans);

        v.pop_back();
        solve(a, target, i + 1, v, ans);
    }
};