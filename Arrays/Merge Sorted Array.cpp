// 88. Merge Sorted Array

// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0, k = 0;

    vector<int> ans(m + n);

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            ans[k++] = nums1[i++];
        }

        else
        {
            ans[k++] = nums2[j++];
        }
    }

    while (i < m)
    {
        ans[k++] = nums1[i++];
    }
    while (j < n)
    {
        ans[k++] = nums2[j++];
    }
    for (int i = 0; i < ans.size(); i++)
    {
        nums1[i] = ans[i];
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> nums1(m + n);
    vector<int> nums2(n);

    for (int i = 0; i < m; i++)
    {
        cin >> nums1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> nums2[i];
    }

    merge(nums1, m, nums2, n);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}