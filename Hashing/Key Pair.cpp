#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    // code here
    unordered_map<int, int> index;
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        num = x - arr[i];

        if (index.count(num) == 1)
        {
            return true;
        }

        index[arr[i]] = i;
    }

    return false;
}

int main()
{
    int n, x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> x;

    cout << hasArrayTwoCandidates(arr, n, x);

    return 0;
}