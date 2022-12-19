// 1. Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

// Time Complexity : O(n^2)

// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int>arr;
//     for(int i=0;i<nums.size()-1;i++){
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[i] + nums[j] == target){
//                 arr.push_back(i);
//                 arr.push_back(j);
//                 return arr;
//             }
//         }
//     }
//     return arr;
// }



// Time Complexity : O(N)

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]] = i;
    }

    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        
        int num = target - nums[i];

        if(mp.count(num) > 0 && i != mp[num]){
            ans.push_back(i);
            ans.push_back(mp[num]);
            return ans;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int target;
    cin>>target;

    vector<int> ans = twoSum(v, target);

    cout<<ans[0]<<" "<<ans[1];
    return 0;
}