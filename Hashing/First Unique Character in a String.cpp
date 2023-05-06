// Given a string s, find the first non-repeating character in it and return its
// index. If it does not exist, return -1.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int firstUniqChar(string s) {
  unordered_map<int, int> freq;

  for (int i = 0; i < s.size(); i++) {
    freq[s[i]]++;
  }

  int minIdx = s.size() + 1;

  for (int i = 0; i < s.size(); i++) {
    if (freq[s[i]] == 1) {
      return i;
    }
  }

  return -1;
}

int main() {

  string str;
  cin >> str;

  cout << firstUniqChar(str);
}