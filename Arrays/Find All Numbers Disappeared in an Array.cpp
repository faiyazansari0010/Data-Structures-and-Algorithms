// 448. Find All Numbers Disappeared in an Array

// Given an array nums of n integers where nums[i] is in the range [1, n], 
// return an array of all the integers in the range [1, n] that do not appear in nums.

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

// vector<int> findDisappearedNumbers(vector<int>& nums) {
//     unordered_map<int, bool>mp;
//     for(int i=0;i<nums.size();i++){
//         mp[nums[i]] = true;
//     }
//     vector<int>ans;
//     for(int i=1;i<=nums.size();i++){
//         if(mp.count(i) == false){
//             ans.push_back(i);
//         }
//     }
//     return ans;
// }

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[abs(nums[i]) - 1] > 0)
            nums[abs(nums[i]) - 1] *= -1;
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            ans.push_back(i + 1);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = findDisappearedNumbers(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}