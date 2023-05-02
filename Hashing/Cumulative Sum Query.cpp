// You are given a list of N numbers and Q queries. Each query is specified by
// two numbers i and j; the answer to each query is the sum of every number
// between the range [i, j] (inclusive)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Time Complexity : O(N+Q)
// Space Complexity : O(N)

void CSumQuery(int nums[], int size, vector<vector<int>> query) {
  vector<int> prefixSum(size, 0);
  for (int i = 0; i < size; i++) {
    prefixSum[i] = prefixSum[i - 1] + nums[i];
  }

  for (int i = 0; i < query.size(); i++) {
    int a = query[i][0], b = query[i][1];
    cout << prefixSum[b] - prefixSum[a - 1] << endl;
  }
}

int main() {

  int size, querySize;
  cin >> size;

  int nums[size];
  for (int i = 0; i < size; i++) {
    cin >> nums[i];
  }

  cin >> querySize;

  vector<vector<int>> query;
  vector<int> temp;

  for (int i = 0; i < querySize; i++) {
    int a, b;
    cin >> a >> b;
    temp.push_back(a);
    temp.push_back(b);
    query.push_back(temp);
    temp.clear();
  }

  // for(int i=0;i<querySize;i++){
  //    vector<int> vec = query[i];

  //    int sum = 0;
  //    for(int i=vec[0]; i<=vec[1]; i++){
  //      sum += nums[i];
  //    }

  //    cout<<sum<<endl;
  //  }

  CSumQuery(nums, size, query);

  return 0;
}