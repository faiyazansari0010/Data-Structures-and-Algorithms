// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
// typically using all the original letters exactly once.

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
// Example 2:

// Input: strs = [""]
// Output: [[""]]
// Example 3:

// Input: strs = ["a"]
// Output: [["a"]]

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    vector<string> originalStrs = strs;
    for(int i=0;i<originalStrs.size();i++){
        string str = originalStrs[i];
        sort(str.begin(), str.end());
        originalStrs[i] = str;
    }        

    vector<vector<string>> ans;
    vector<string>miniAns;
    for(int i=0;i<originalStrs.size()-1;i++){
        if(originalStrs[i] == ""){
            continue;
        }
        for(int j=1;j<originalStrs.size();j++){
            if(originalStrs[j] == ""){
                continue;
            }
            
            if(originalStrs[i] == originalStrs[j]){
                miniAns.push_back(strs[j]);
                originalStrs[j] = "";
            }
        }
        miniAns.push_back(strs[i]);
        originalStrs[i] = "";
        ans.push_back(miniAns);
        miniAns.clear();
    }
}