/* Leetcode Link : https://leetcode.com/problems/perfect-rectangle/ */

class Solution
{
public:
    bool isRectangleCover(vector<vector<int>> &rectangles)
    {
        int count = 0;
        map<pair<int, int>, int> mp;
        for (auto i : rectangles)
        {
            mp[{i[0], i[1]}] += 1;
            mp[{i[2], i[3]}] += 1;
            mp[{i[0], i[3]}] -= 1;
            mp[{i[2], i[1]}] -= 1;
        }
        for (auto i : mp)
        {
            if (abs(i.second) != 1 && i.second != 0)
            {
                return false;
            }
            if (abs(i.second))
            {
                count += 1;
            }
        }
        if (count == 4)
            return true;
        return false;
    }
};

/* Submission Link : https://leetcode.com/problems/perfect-rectangle/submissions/869625954/ */