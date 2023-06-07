// Given an array arr[] consisting of N integers, the task is to find the length of the Smallest subarray with a sum equal to K

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int minSubArrayLen(int target, int nums[], int n)
{

    int minLength = INT_MAX, sum = 0;
    unordered_map<int, int> hash;

    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];

        if (sum == target)
        {
            minLength = min(minLength, i);
        }

        else
        {
            if (hash.count(sum - target) == 1)
            {
                minLength = min(minLength, i - hash[sum - target]);
            }
        }

        hash[sum] = i;
    }

    if (minLength == INT_MAX)
    {
        return 0;
    }
    else
    {
        return minLength;
    }
}

int main()
{

    int n, k;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> k;
    
    cout << minSubArrayLen(k, nums, n);

    return 0;
}