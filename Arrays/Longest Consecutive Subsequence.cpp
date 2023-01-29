// 128. Longest Consecutive Sequence

// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

// Time Complexity : O(NlogN)
// Space Complexity : O(1)

// int longestConsecutive(vector<int>& nums) {

//     sort(nums.begin(), nums.end());

//     if(nums.size() == 0 || nums.size() == 1){
//         return nums.size();
//     }

//     int maxLen = INT_MIN;
//     int currMaxLen = 0;

//     for(int i=1;i<nums.size();i++){

//         if(nums[i] == (nums[i-1] + 1)){
//             currMaxLen++;
//         }

//         else if(nums[i] == nums[i-1]){
//             continue;
//         }

//         else{
//             if(currMaxLen > maxLen){
//                 maxLen = currMaxLen;
//             }
//             currMaxLen = 0;
//         }
//     }

//     return maxLen > currMaxLen? maxLen + 1: currMaxLen + 1;
// }

// Time Complexity : O(N)
// Space Complexity : O(N)

int longestConsecutive(vector<int> &arr)
{
    int n = arr.size();
    unordered_set<int> S;
    int ans = 0;

    for (int i = 0; i < n; i++)
        S.insert(arr[i]);

    for (int i = 0; i < n; i++)
    {

        if (S.find(arr[i] - 1) == S.end())
        {

            int j = arr[i];
            while (S.find(j) != S.end())
                j++;

            ans = max(ans, j - arr[i]);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    cout << longestConsecutive(vec);

    return 0;
}