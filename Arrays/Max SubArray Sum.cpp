// 53. Maximum Subarray

// Given an integer array nums, find the subarray which has the largest sum and return its sum.

#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
#include <string>
using namespace std;

int maxSubArray(vector<int>& nums) {
        
        int currSum = 0;
        int maxSum = INT_MIN;

        for(int i=0;i<nums.size();i++){

            currSum = currSum + nums[i];

            if(currSum > maxSum){
                maxSum = currSum;
            }

            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }

int main() { 
	// Vector of vectors 
	int size;
  cin >> size;
  vector<int> nums(size);

  for (int i = 0; i < size; i++)
  {
    cin >> nums[i];
  }

  cout<< maxSubArray(nums);

  return 0;
}