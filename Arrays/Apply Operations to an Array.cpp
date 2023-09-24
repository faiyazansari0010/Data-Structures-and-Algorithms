#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;


class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
        }
        
        return nums;
    }
};