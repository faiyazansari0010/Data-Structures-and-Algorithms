// CPP program to find the minimum number of operations required to make all elements of array equal
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int minOperation(int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // find the max frequency
    int max_count = 0;
    for (auto it : hash)
    {
        max_count = max(max_count, it.second);
    }

    // return result
    return (n - max_count);
}

int main()
{

    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << minOperation(nums, n);

    return 0;
}