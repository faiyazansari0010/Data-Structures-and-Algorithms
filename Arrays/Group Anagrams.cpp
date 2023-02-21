<<<<<<< HEAD
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
=======
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> mp;

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    for (int i = 0; i < strs.size(); i++)
    {
        int charSum = 0;
        string str = strs[i];
        for (int j = 0; j < str.size(); j++)
        {
            charSum += int(str[j]);
        }
        mp[strs[i]] = charSum;
    }

    unordered_map<string, int>::iterator i = mp.begin();

    // while(i != mp.end()){
    //     cout<<i->first<<" "<<i->second<<endl;
    //     i++;
    // }

    vector<vector<string>> ans;
    vector<string> miniAns;

    while (i != mp.end())
    {
        if (i->second != -1)
        {
            int charSum = i->second;
          string str1 = i->first;
            miniAns.push_back(str1);
            i->second = -1;

            for (auto j = mp.begin(); j != mp.end(); j++)
            {
                if (j->second != -1 && j->second == charSum)
                {
                  string str2 = j->first;
                    miniAns.push_back(str2);
                    j->second = -1;
                }
            }
          for(int i=0;i<miniAns.size();i++){
            cout<<miniAns[i]<<" ";
          }
            // ans.push_back(miniAns);
            // miniAns.clear();
            i++;
        }
    }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
>>>>>>> ed297b42ee8879fc75e3beb7ad91e1de0498a63b
