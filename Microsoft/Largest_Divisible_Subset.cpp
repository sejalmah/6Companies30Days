/* Leetcode Link : https://leetcode.com/problems/largest-divisible-subset/description/ */

class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        int n = nums.size(), mx = 1;
        sort(nums.begin(), nums.end());
        vector<int> dp(n, 1);
        vector<int> hash(n);
        int last = 0;
        for (int i = 0; i < n; i++)
        {
            hash[i] = i;
            // cout<<"is"<<hash[i]<<endl;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] % nums[j] == 0 && dp[i] < 1 + dp[j])
                {
                    dp[i] = 1 + dp[j];
                    hash[i] = j;
                    // cout<<"j is "<<j<<endl;
                }
            }
            if (dp[i] > mx)
            {
                mx = dp[i];
                last = i;
            }
        }
        // for(auto j:dp) cout<<j<<" ";
        // cout<<endl;
        // cout<<"mx is "<<mx<<endl;
        // cout<<"last is "<<last<<endl;
        // for(auto j:hash) cout<<j<<" ";
        vector<int> temp;
        temp.push_back(nums[last]);
        while (hash[last] != last)
        {
            last = hash[last];
            temp.push_back(nums[last]);
        }
        // cout<<endl;
        // for(auto j:temp) cout<<j<<" ";
        reverse(temp.begin(), temp.end());
        return temp;
    }
};

/* Submission Link : https://leetcode.com/problems/largest-divisible-subset/submissions/869128561/ */