#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

// Approach 1
int singleNonDuplicate(vector<int> &nums)
{

  int counter = 0, size = nums.size();

  while (counter < size)
  {

    if (nums.size() == 1)
    {
      break;
    }

    auto it = nums.begin();

    int mid = nums.size() / 2;
    if (nums[mid] != nums[mid - 1] and nums[mid] != nums[mid + 1])
    {
      return nums[mid];
    }

    if (nums[mid] == nums[mid - 1])
    {
      nums.erase(it + (mid - 1), it + (mid + 1));
      counter += 2;
    }

    else
    {
      if (nums[mid] == nums[mid + 1])
      {
        nums.erase(it + mid, it + (mid + 2));
        counter += 2;
      }
    }
  }

  return nums[0];
}

// Approach 2
int singleNonDuplicate(vector<int> &nums)
{
  int l = 0, r = nums.size() - 1;

  while (l < r)
  {

    int mid = (l + r) / 2;

    if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) || (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
    {
      l = mid + 1;
    }

    else
      r = mid;
  }

  return nums[r];
}

int main()
{

  return 0;
}