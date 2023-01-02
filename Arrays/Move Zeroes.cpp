// 283. Move Zeroes

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

// void moveZeroes(vector<int>& nums) {
//         int j = 0;
//         // move all the nonzero elements advance
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != 0) {
//                 nums[j++] = nums[i];
//             }
//         }
//         for (;j < nums.size(); j++) {
//             nums[j] = 0;
//         }
//     }

void moveZeroes(vector<int> &nums)
{
    int i = 0, j = 0;
    int n = nums.size();
    while (i < n)
    {
        if (nums[j] == 0)
        {
            nums.erase(nums.begin() + j);
            nums.push_back(0);
            i++;
        }
        else
        {
            i++;
            j++;
        }
    }
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

    moveZeroes(vec);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}