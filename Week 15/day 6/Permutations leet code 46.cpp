#include<bits/stdc++.h>/// https://leetcode.com/problems/permutations/
using namespace std;
class Solution
{
public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        do ans.push_back(nums);
        while (next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};
int main()
{
    return 0;
}
