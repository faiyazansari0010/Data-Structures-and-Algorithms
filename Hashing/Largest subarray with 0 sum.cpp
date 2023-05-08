#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int maxLen(vector<int> &A, int n)
{

    int ans = 0;
    int sum = 0;

    unordered_map<int, int> isPresent;

    for (int i = 0; i < n; i++)
    {

        sum = sum + A[i];

        if (sum == 0)
        {
            ans = i + 1;
        }

        else if (isPresent.count(sum) == 1)
        {
            int idx = isPresent[sum];
            ans = max(ans, i - idx);
        }

        else
        {
            isPresent[sum] = i;
        }
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << maxLen(v, n);

    return 0;
}