#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int binarySearch(vector<int> nums, int s, int e, int target){
        int mid;
        while(s<=e){
            mid = (s+e)/2;
            if(nums[mid]==target){
                return mid;
            }

            else if(nums[mid]>target){
                e = mid-1;
            }

            else{
                s = mid+1;
            }
        }
        return -1;
    }

    int findPivot(vector<int>nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i+1] < nums[i]){
                return i;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {

        if(nums.size() == 1){
            if(nums[0] == target){
                return 0;
            }
            else{return -1;}
        }
        
        if(nums[0] < nums[nums.size()-1]){
            return binarySearch(nums, 0, nums.size()-1, target);
        }
        
        else{
            int pivotIdx = findPivot(nums);
            if(target >= nums[0]){
                return binarySearch(nums, 0, pivotIdx, target);
            }

            else{
                return binarySearch(nums, pivotIdx+1, nums.size()-1, target);
            }
        }
    }

int main(){
  
  return 0;
}