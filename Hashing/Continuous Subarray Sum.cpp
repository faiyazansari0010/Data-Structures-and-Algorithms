#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkSubarraySum(vector<int> &nums, int k)
{
    if (nums.size() < 2)
    {
        return false;
    }

    unordered_map<int, int> prefixSumMap;
    int runningSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        runningSum = runningSum + nums[i];

        if (runningSum % k == 0 && i > 0)
        {
            return true;
        }

        int remainder = runningSum % k;
        if (prefixSumMap.count(remainder) == 1)
        {
            if (i - prefixSumMap[remainder] >= 2)
            {
                return true;
            }
        }

        else
            prefixSumMap[remainder] = i;
    }

    return false;
}

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int>nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<checkSubarraySum(nums, k);    
    return 0;
}