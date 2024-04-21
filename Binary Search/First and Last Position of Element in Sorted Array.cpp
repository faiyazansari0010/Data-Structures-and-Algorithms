#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
  int s = 0, e = nums.size() - 1, i = -1, j = -1;

  vector<int> ans(2, -1);

  if (nums.size() == 0)
  {
    return ans;
  }

  while (s <= e)
  {
    int mid = s + ((e - s) / 2);

    if (nums[mid] == target)
    {
      i = mid, j = mid;
      break;
    }

    else if (nums[mid] > target)
    {
      e = mid - 1;
    }

    else
    {
      s = mid + 1;
    }
  }

  while (i > 0)
  {
    if (nums[i - 1] == target)
    {
      i--;
    }

    else
    {
      break;
    }
  }

  while (j < (nums.size() - 1))
  {
    if (nums[j + 1] == target)
    {
      j++;
    }

    else
    {
      break;
    }
  }

  ans[0] = i;
  ans[1] = j;

  return ans;
}

int main()
{

  return 0;
}