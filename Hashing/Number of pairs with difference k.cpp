#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int countKDifference(vector<int> &nums, int k)
{
    unordered_map<int, int> isPresent;

    for (int i = 0; i < nums.size(); i++)
    {
        isPresent[nums[i]]++;
    }

    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i] + k;
        if (isPresent.count(num) == 1)
        {
            count = count + isPresent[num];
        }
    }

    return count;
}

int main()
{

    int size, k;
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cin >> k;

    cout << countKDifference(nums, k);

    return 0;
}