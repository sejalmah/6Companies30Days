/* Leetcode Link : https://leetcode.com/problems/airplane-seat-assignment-probability/ */

class Solution
{
public:
    double nthPersonGetsNthSeat(int n)
    {
        if (n == 1)
        {
            return (double)n;
        }
        else
        {
            return (double)1 / 2;
        }
    }
};

/* Submission Link : https://leetcode.com/problems/airplane-seat-assignment-probability/submissions/869799892/ */