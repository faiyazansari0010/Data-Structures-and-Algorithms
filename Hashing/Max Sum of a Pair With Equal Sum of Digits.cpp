#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findDigitSum(int num)
{
  int sum = 0;
  while (num > 0)
  {
    sum = sum + num % 10;
    num = num / 10;
  }
  return sum;
}

int maximumSum(vector<int> &nums)
{
  unordered_map<int, int> hash;
  int currSum = 0, maxSum = 0;

  for (int i = 0; i < nums.size(); i++)
  {

    int digitSum = findDigitSum(nums[i]);

    if (hash.count(digitSum) == 1)
    {
      if (currSum < hash[digitSum] + nums[i])
      {
        currSum = hash[digitSum] + nums[i];
      }

      if (hash[digitSum] < nums[i])
      {
        hash[digitSum] = nums[i];
      }

      maxSum = max(maxSum, currSum);
    }

    else
    {
      hash[digitSum] = nums[i];
    }
  }

  if (maxSum == 0)
  {
    return -1;
  }
  return maxSum;
}

int main()
{
  int n;
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }]

  cout<<maximumSum(nums);
  return 0;
}