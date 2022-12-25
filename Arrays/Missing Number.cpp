// 268. Missing Number

// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

// int missingNumber(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     for(int i=0;i<nums.size();i++){
//         if(i != nums[i]){
//             return i;
//         }
//     }
//     return nums.size();
// }


int missingNumber(vector<int>& nums) {
  int x = nums[0];
  int n = nums.size();
  for(int i=1;i<n;i++){
      x = x^nums[i];
  }
  
  for(int i=0;i<=n;i++){
      x = x^i;
  }
  return x;
}

int main(){
  int n;
  cin>>n;
  vector<int>nums(n);

  for (int i=0;i<n;i++){
    cin>>nums[i];
  }
  
  cout<<missingNumber(nums);
  
  return 0;
}