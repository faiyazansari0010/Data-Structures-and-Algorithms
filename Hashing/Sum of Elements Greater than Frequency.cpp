// Given an array arr[] of N integers. The task is to find the sum of the elements which have frequencies greater than or equal to that element in the array

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin>>n;
  int nums[n];

  for(int i=0;i<n;i++){
    cin>>nums[i];
  }

  unordered_map<int, int>frequency;

  for(int i=0;i<n;i++){
    frequency[nums[i]]++;
  }

  int sum = 0;

  for(auto it : frequency){
    if(it.second >= it.first){
      sum = sum + it.first;
    }
  }

  cout<<sum;
  return 0;
}