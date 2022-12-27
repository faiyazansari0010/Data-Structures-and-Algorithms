// 442. Find All Duplicates in an Array
// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{

  vector<int> ans;
  int n = nums.size();

  for (int i = 0; i < n; i++)
  {

    int idx = abs(nums[i]) - 1;

    if (nums[idx] < 0)
    {
      ans.push_back(idx + 1);
    }

    nums[idx] = -nums[idx];
  }

  return ans;
}

int main()
{
  int size;
  cin >> size;
  vector<int> nums(size);

  for (int i = 0; i < size; i++)
  {
    cin >> nums[i];
  }

  vector<int> ans = findDuplicates(nums);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}