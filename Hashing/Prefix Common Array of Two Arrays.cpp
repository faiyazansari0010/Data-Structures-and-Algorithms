#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
{
  unordered_map<int, int> hash;
  int count = 0, n = A.size();
  vector<int> ans(n);

  for (int i = 0; i < n; i++)
  {
    if (A[i] == B[i])
    {
      count++;
    }

    else
    {
      if (hash.count(A[i]) == 1)
      {
        count++;
      }
      if (hash.count(B[i]) == 1)
      {
        count++;
      }
    }

    ans[i] = count;

    hash[A[i]]++;
    hash[B[i]]++;
  }

  return ans;
}

int main()
{
  int n, m;
  vector<int>A(n);
  vector<int>B(m);

  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  for(int i=0;i<m;i++){
    cin>>B[i];
  }

  cout<<findThePrefixCommonArray(A, B);
  return 0;
}