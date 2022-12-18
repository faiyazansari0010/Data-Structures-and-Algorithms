// 66. Plus One

// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
// The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.

#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {

    for(int i = digits.size() - 1; i>=0; i--){
        if(digits[i] < 9){
            digits[i]++;
            return digits;
        }

        else{
            digits[i] = 0;
        }
    }

    digits.push_back(0);
    digits[0] = 1;

    return digits;
}

int main(){

  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  vector<int> ans = plusOne(v);
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  return 0;
}