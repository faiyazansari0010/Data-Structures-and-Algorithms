// Given an array which may contain duplicates, print all elements and their frequencies.

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
  
  int size;
  cin>>size;
  int nums[size];
  for(int i=0;i<size;i++){
    cin>>nums[i];
  }

  unordered_map<int, int> frequency;

  for(int i=0;i<size;i++){
    frequency[nums[i]]++;
  }

  for(int i=0;i<size;i++){
    if(frequency[nums[i]] != -1){
      cout<<nums[i]<<" "<<frequency[nums[i]]<<endl;
    }
    frequency[nums[i]] = -1;
  }
  
  return 0;
}