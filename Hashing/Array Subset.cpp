#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{

    unordered_map<int, int> isPresent;

    for (int i = 0; i < n; i++)
    {
        isPresent[a1[i]]++;
    }

    string ans = "No";

    for (int i = 0; i < m; i++)
    {
        if (isPresent.count(a2[i]) == 0 || isPresent[a2[i]] == 0)
        {
            return ans;
        }

        else
        {
            isPresent[a2[i]]--;
        }
    }

    ans = "Yes";
    return ans;
}

int main()
{

    int n, m;
    int arr1[n], arr2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << isSubset(arr1, arr2, n, m);
    return 0;
}