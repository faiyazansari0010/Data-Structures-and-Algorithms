// 238. Product of Array Except Self
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

// Space Complexity : O(2N)

    // vector<int> productExceptSelf(vector<int>& nums) {
    //     int n = nums.size();

    //     vector<int>leftProd(n, 1);
    //     vector<int>rightProd(n, 1);

    //     int currProd = 1;

    //     for(int i=1;i<n;i++){
    //         leftProd[i] = leftProd[i-1] * nums[i-1];
    //     }

    //     currProd = 1;

    //     for(int i=n-2;i>=0;i--){
    //         rightProd[i] = rightProd[i+1] * nums[i+1];
    //     }

    //     vector<int>ans(n);
    //     for(int i=0;i<n;i++){
    //         ans[i] = leftProd[i] * rightProd[i];
    //     }
        
    //     return ans;
    // }



    // Space Complexity : O(N)

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans(n, 1);
        
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        int rightNum = 1;
        for(int i=n-2;i>=0;i--){
            int num = ans[i];
            rightNum = rightNum * nums[i+1];
            ans[i] = num * rightNum;
        }

        return ans;
    }

int main()
{
  int size;
  cin >> size;
  vector<int> nums(size);

  for (int i = 0; i < size; i++)
  {
    cin >> nums[i];
  }

  vector<int> ans = productExceptSelf(nums);

  for (int i = 0; i < size; i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}