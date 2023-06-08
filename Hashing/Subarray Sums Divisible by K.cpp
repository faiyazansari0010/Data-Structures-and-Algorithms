#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int subarraysDivByK(vector<int> &nums, int k)
{
    int count = 0;
    unordered_map<int, int> remainderMap;
    int runningSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        runningSum = runningSum + nums[i];

        if (runningSum % k == 0)
        {
            count++;
        }

        int remainder = runningSum % k;

        if (remainder < 0)
        {
            remainder += k; // Because -1 % 5 = -1, But we need the positive mod i.e 4
        }

        int prevSubarraysCount = remainderMap[remainder];

        count = count + prevSubarraysCount;

        remainderMap[remainder]++;
    }

    return count;
}

int main()
{
    int n, k;
    cin>>n>>k;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<subarraysDivByK(nums, k);
    return 0;
}