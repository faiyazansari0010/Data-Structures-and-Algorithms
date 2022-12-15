// 136. Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

// Brute Force

// int singleNumber(vector<int>& nums) { 
//    sort(nums.begin(),nums.end());
//     for(int i=1;i<nums.size();i+=2)
//     {
//         if(nums[i]!=nums[i-1])
//             return nums[i-1];
//     }
//     return nums[nums.size()-1];
// }

int singleNumber(vector<int>& nums) { 
    
    int ans = 0;
    for(int i=0;i<nums.size();i++){
        ans = ans ^ nums[i];
    }
    return ans;
}

int main(){
    int n, a;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }

    cout<<singleNumber(nums);
    return 0;
}