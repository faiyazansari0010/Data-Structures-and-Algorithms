// Given an array, a[], and an element x, find a number of occurrences of x in a[].

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Time Complexity: O(n) 
// Auxiliary Space: O(1)

// int numOfOccurences(int arr[], int num, int size){
//   int count = 0;
//   for(int i=0;i<size;i++){
//     if(arr[i] == num){
//       count++;
//     }
//   }
//   return count;
// }


// Using Hashing
// Time Complexity: O(n) 
// Auxiliary Space: O(n)

int numOfOccurences(int arr[], int num, int size){
  
  unordered_map<int, int> occurences;
  for(int i=0;i<size;i++){
    occurences[arr[i]]++;
  }
  return occurences[num];
  
}

int main(){

  int num, size;
  cin>>num>>size;
  
  int numArray[size];

  for(int i=0;i<size;i++){
    cin>>numArray[i];
  }

  cout<<numOfOccurences(numArray, num, size);
  return 0;
}