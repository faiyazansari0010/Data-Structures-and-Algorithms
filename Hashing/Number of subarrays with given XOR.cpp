// Given an array of integers arr[] and a number m, count the number of subarrays having XOR of their elements as m.
// Examples: 

// Input : arr[] = {4, 2, 2, 6, 4}, m = 6
// Output : 4
// Explanation : The subarrays having XOR of 
//               their elements as 6 are {4, 2}, 
//               {4, 2, 2, 6, 4}, {2, 2, 6},
//               and {6}

// Input : arr[] = {5, 6, 7, 8, 9}, m = 5
// Output : 2
// Explanation : The subarrays having XOR of
//               their elements as 5 are {5}
//               and {5, 6, 7, 8, 9}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int size, m;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
	    cin>>arr[i];
	}
	
	cin>>m;
	
	unordered_map<int, int>freq;
	int count = 0, currXor = 0;
	
	for(int i=0;i<size;i++){
	   currXor = currXor ^ arr[i];
	   
	   if(currXor == m){
	       count++;
	   }
	   
	   count = count+freq[currXor ^ m];
	   
	   freq[currXor] ++;
	}
	
	cout<<count;
	
	return 0;
}