// 34. Find First and Last Position of Element in Sorted Array

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1]

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans(2, -1);

    int s = 0, e = nums.size() - 1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        if (nums[mid] == target)
        {
            ans[0] = mid;
            e = mid - 1;
        }

        else if (nums[mid] > target)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }

    s = 0;
    e = nums.size() - 1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        if (nums[mid] == target)
        {
            ans[1] = mid;
            s = mid + 1;
        }

        else if (nums[mid] > target)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    // Vector of vectors
    int size, target;
    cin >> size;
    vector<int> nums(size);

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cin >> target;

    vector<int> ans = searchRange(nums, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}