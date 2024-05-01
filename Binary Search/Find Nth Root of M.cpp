#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int NthRoot(int n, int m)
{
  if (n == 1)
  {
    return m;
  }

  if (m == 1)
  {
    return 1;
  }

  int l = 2, r = sqrt(m);

  while (l <= r)
  {
    int mid = (l + r) / 2;
    double num = pow(mid, n);

    if (num > m)
    {
      r = mid - 1;
    }

    else if (num < m)
    {
      l = mid + 1;
    }

    else
    {
      return mid;
    }
  }

  return -1;
}

int main()
{

  return 0;
}