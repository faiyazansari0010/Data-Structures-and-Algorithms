#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int maxEqualNums(int nums[], int n, int k)
{
  int frequency[100000] = {0};

  for (int i = 0; i < n; i++)
  {
    int low = nums[i] - k;
    int high = nums[i] + k;

    for (int j = low; j <= high; j++)
    {
      frequency[j] += 1;
    }
  }

  int maxFreq = 0;
  for (int i = 0; i < 100000; i++)
  {
    maxFreq = max(maxFreq, frequency[i]);
  }

  return maxFreq;
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

  cout << maxEqualNums(nums, n, k);
  return 0;
}