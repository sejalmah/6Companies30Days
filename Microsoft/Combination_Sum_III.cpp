/* Leetcode Link : https://leetcode.com/problems/combination-sum-iii/ */

class Solution
{
public:
    void solve(int index, vector<int> &given, int sum, int k, int n, vector<vector<int>> &result, vector<int> &curr, int size)
    {
        if (sum > n)
            return;
        if (index == size)
        {
            if (sum == n && curr.size() == k)
                result.push_back(curr);
            return;
        }
        sum += given[index];
        curr.push_back(given[index]);
        solve(index + 1, given, sum, k, n, result, curr, size);
        sum -= given[index];
        curr.pop_back();
        solve(index + 1, given, sum, k, n, result, curr, size);
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> given;
        vector<int> curr;
        vector<vector<int>> result;
        for (int i = 1; i <= 9; i++)
            given.push_back(i);
        int sum = 0, index = 0;
        int size = given.size();
        solve(index, given, sum, k, n, result, curr, size);
        return result;
    }
};

/* Submission Link : https://leetcode.com/problems/combination-sum-iii/submissions/868614928/ */