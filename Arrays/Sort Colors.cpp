// 75. Sort Colors

// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
    // int zero = 0, one = 0, two = 0;

    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]==0){
    //         zero++;
    //     }
    //     else if(nums[i] == 1){
    //         one++;
    //     }
    //     else{
    //         two++;
    //     }
    // }

    // nums.clear();

    // while(zero--){
    //     nums.push_back(0);
    // }

    // while(one--){
    //     nums.push_back(1);
    // }

    // while(two--){
    //     nums.push_back(2);
    // }

    int st = 0, mid = 0, end = nums.size() - 1;

    while (mid <= end)
    {
        if (nums[mid] == 1)
        {
            mid++;
        }

        else if (nums[mid] == 0)
        {
            int temp = nums[mid];
            nums[mid] = nums[st];
            nums[st] = temp;
            st++;
            mid++;
        }

        else if (nums[mid] == 2)
        {
            int temp = nums[mid];
            nums[mid] = nums[end];
            nums[end] = temp;
            end--;
        }
    }
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

    sortColors(nums);

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}