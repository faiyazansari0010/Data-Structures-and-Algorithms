// 118. Pascal's Triangle
// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it

// Time complexity : O(n^3)

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int binomCoeff(int n, int r){
    int res = 1;
    for(int i=0;i<r;i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

vector<vector<int>> generate(int numRows) {

    vector<vector<int>> ans;
    vector<int> smallAns;

    for(int i=0;i<numRows;i++){
        for(int j=0;j<=i;j++){
            int num = binomCoeff(i, j);
            smallAns.push_back(num);
        }

        ans.push_back(smallAns);
        smallAns.clear();
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans = generate(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}