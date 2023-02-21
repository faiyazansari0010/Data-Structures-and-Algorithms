// 49. Group Anagrams

// Given an array of strings strs, group the anagrams together. You can return
// the answer in any order. An Anagram is a word or phrase formed by rearranging
// the letters of a different word or phrase, typically using all the original
// letters exactly once

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string strSort(string str) {
  int arr[26] = {0};
  for (int i = 0; i < str.size(); i++) {
    arr[str[i] - 'a']++;
  }

  string result = "";
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < arr[i]; j++) {
      char a = 'a' + i;
      result = result + a;
    }
  }
  return result;
}

vector<vector<string>> groupAnagrams(vector<string> &strs) {

  unordered_map<string, vector<string>> mp;

  for (int i = 0; i < strs.size(); i++) {
    string str = strSort(strs[i]);

    mp[str].push_back(strs[i]);
  }

  vector<vector<string>> ans;
  for (auto i : mp) {
    ans.push_back(i.second);
  }

  return ans;
}

int main() {
  int size;
  cin>>size;
  vector<string> strings(size);
  
  for(int i=0;i<size;i++){
    cin>>strings[i];
  }

  vector<vector<string>> ans = groupAnagrams(strings);

  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}