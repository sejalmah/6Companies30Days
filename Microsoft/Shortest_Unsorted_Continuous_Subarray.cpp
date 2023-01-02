/* Leetcode Link : https://leetcode.com/problems/shortest-unsorted-continuous-subarray/ */

//  O(nlogn) solution, will update it with o(n) solution soon

class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        int n = nums.size(), first = 0, second = 0;
        vector<int> nums2 = nums;
        sort(nums2.begin(), nums2.end());
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != nums2[i])
            {
                first = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] != nums2[i])
            {
                second = i;
                break;
            }
        }
        if (first == 0 && second == 0)
            return 0;
        return second - first + 1;
    }
};

/* Submission Link : https://leetcode.com/problems/shortest-unsorted-continuous-subarray/submissions/869631587/ */