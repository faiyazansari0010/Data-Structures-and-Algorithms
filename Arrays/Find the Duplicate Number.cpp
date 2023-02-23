// 287. Find the Duplicate Number

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int idx = abs(arr[i]);
        if (arr[idx] < 0)
        {
            return idx;
        }
        arr[idx] = -arr[idx];
    }

    return n;
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

    cout << findDuplicate(nums);
    return 0;
}