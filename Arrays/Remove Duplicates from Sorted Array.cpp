// 26. Remove Duplicates from Sorted Array
// Given a sorted array, the task is to remove the duplicate elements from the array.

#include<iostream>
#include<vector>
using namespace std;
            
  int removeDuplicates(vector<int>& nums) {
      
    int j = 0;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i] != nums[i+1]){
            nums[j++] = nums[i];
        }
    }

    nums[j++] = nums[nums.size()-1];
    return j;
}

int main(){
  int n;
  cin>>n;
  
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  
  int a = removeDuplicates(v);
  cout<<a<<endl;
  for(int i=0;i<a;i++){
    cout<<v[i]<<" ";
  }
  return 0;
}