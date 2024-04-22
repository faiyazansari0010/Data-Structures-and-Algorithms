#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n, target, mid = 0;
  cin >> n >> target;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  int l = 0, r = n - 1;

  while (l <= r) {
    mid = (l + r) / 2;

    if (nums[mid] <= target) {
      l = mid + 1;
    }

    else {
      if (nums[mid - 1] < target) {
        cout << mid;
        return 0;
      }

      else {
        r = mid - 1;
      }
    }
  }

  cout << mid;

  return 0;
}
