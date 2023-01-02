/* Leetcode Link : https://leetcode.com/problems/longest-happy-prefix/ */

// O(n^2) solution -> TLE

// will update it with more optimised solution soon

class Solution
{
public:
    string longestPrefix(string s)
    {
        // approach1
        int n = s.length();
        string prefix = s.substr(0, n - 1);
        string suffix = s.substr(1, n - 1);
        while (prefix.length())
        {
            if (prefix == suffix)
            {
                return prefix;
            }
            else
            {
                prefix.pop_back();
                suffix = suffix.substr(1, suffix.size() - 1);
            }
        }
        return "";
        // approach2

        // map<string,int>mp;
        // string pre,suf;
        // for(int i=0;i<n-1;i++){
        //     pre+=s[i];
        //     // cout<<pre<<endl;
        //     mp[pre]++;
        // }
        // for(int i=n-1;i>=1;i--){
        //     suf+=s[i];
        //     string suf2=suf;
        //     reverse(suf2.begin(),suf2.end());
        //     // cout<<suf2<<endl;
        //     mp[suf2]++;
        // }
        // // ababab
        // int mx=0;
        // string ans;
        // for(auto j:mp){
        //     if(j.second==2){
        //         string t=j.first;
        //         int s=t.length();
        //         if(s>mx){
        //             mx=s;
        //             ans=t;
        //         }
        //         // mx=max(mx,s);
        //     }
        // }
        // return ans;
    }
};

/* Submission Link : https://leetcode.com/problems/longest-happy-prefix/submissions/869741580/ */