// 169. Majority Element

// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]] ++;
    }

    unordered_map<int, int> :: iterator it = mp.begin();
    
    while(it != mp.end()){
        if(it->second > nums.size() / 2){
            return it->first;
        }
        it++;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<majorityElement(v);
    return 0;
}