#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int findSubArraySum(int Arr[], int N, int k)
{
    unordered_map<int, int> freq;
    int count = 0, sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum = sum + Arr[i];

        if (sum == k)
        {
            count++;
        }

        count = count + freq[sum - k];

        freq[sum]++;
    }

    return count;
}

int main()
{

    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    cout << findSubArraySum(arr, n, k);
    return 0;
}