#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

bool helper(int arr[6], int k)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < 6; i++)
    {
        if (mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]] = i;
        }

        else
        {
            if (i - mp[arr[i]] <= k)
            {
                return true;
            }

            mp[arr[i]] = i;
        }
    }

    return false;
}

int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    bool answer = helper(arr, k);

    if (answer == 0)
    {
        cout << "false";
    }

    else
    {
        cout << "true";
    }
    return 0;
}