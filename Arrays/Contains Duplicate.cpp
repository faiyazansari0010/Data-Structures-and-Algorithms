// 217. Contains Duplicate

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

//Time Complexity : O(nlogn) 

// bool containsDuplicate(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     for(int i=1;i<nums.size();i++){
//         if(nums[i] == nums[i-1]){
//             return true;
//         }
//     }
//     return false;
// }


// Time Complexity : O(n)

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, bool> mp;
    for(int i=0;i<nums.size();i++){
        if(mp.count(nums[i]) == 1){
            return true;
        }
        mp[nums[i]] = true;
    }

    return false;
}

int main(){
  int n;
  cin>>n;
  vector<int>nums(n);

  for (int i=0;i<n;i++){
    cin>>nums[i];
  }
  
  cout<<containsDuplicate(nums);
  
  return 0;
}