// Given an array with repeated elements, the task is to find the maximum
// distance between two occurrences of an element.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// int maxDistance(int arr[], int n)
// {
//     unordered_map<int, bool> calculated;
//     int maxDistance = 0;

//     int j=0;

//     for(int i=0; i<n; i++){
//         if(calculated[arr[i]] == false){
//             int idx1 = i;

//             for(j=n-1; j>=0; j--){
//                 if(arr[j] == arr[i]){
//                     int idx2 = j;
//                     break;
//                 }
//             }
//         }

//         maxDistance = max(maxDistance, (j-i));
//         calculated[arr[i]] = true;
//     }

//     return maxDistance;
// }

int maxDistance(int arr[], int n) {
  unordered_map<int, int> ind;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (ind.find(arr[i]) != ind.end()) {
      if (i - ind[arr[i]] > ans)
        ans = i - ind[arr[i]];
    } else
      ind[arr[i]] = i;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << maxDistance(arr, n);
}