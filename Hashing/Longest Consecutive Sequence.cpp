#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// int longestConsecutive(vector<int>& arr){
//     int  n = arr.size();
//     unordered_set<int> S;
//     int ans = 0;

// for (int i = 0; i < n; i++)
//     S.insert(arr[i]);

// for (int i = 0; i < n; i++) {

//     if (S.find(arr[i] - 1) == S.end()) {

//         int j = arr[i];
//         while (S.find(j) != S.end())
//             j++;

//         ans = max(ans, j - arr[i]);
//     }
// }
// return ans;

// }

int longestConsecutive(vector<int> &nums)
{
    int currLongestLen = 0;
    int longestLen = 0;

    unordered_set<int> isPresent;

    for (int i = 0; i < nums.size(); i++)
    {
        isPresent.insert(nums[i]);
    }

    for (int i = 0; i < nums.size(); i++)
    {

        int num = nums[i];

        if (isPresent.count(num - 1) == 0)
        {

            while (isPresent.count(num++) == 1)
            {
                currLongestLen++;
            }

            longestLen = max(longestLen, currLongestLen);
            currLongestLen = 0;
        }
    }
    return longestLen;
}

int main()
{

    int size;
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cout << longestConsecutive(nums);
    return 0;
}