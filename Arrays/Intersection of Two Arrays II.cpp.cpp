// 350. Intersection of Two Arrays II

// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Time Complexity : O(NlogN)
// Space Complexity : O(1) (except ans vector to return the result)

// vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//     int n1 = nums1.size();
//     int n2 = nums2.size();

//     sort(nums1.begin(), nums1.end());
//     sort(nums2.begin(), nums2.end());

//     vector<int> ans;

//     int i=0, j=0;

//     while(i<n1 && j<n2){
//         if(nums1[i] == nums2[j]){
//             ans.push_back(nums1[i]);
//             i++;
//             j++;
//         }

//         else if(nums1[i] < nums2[j]){
//             i++;
//         }

//         else{
//             j++;
//         }
//     }
//     return ans;
// }


// Time Complexity : O(N)
// Space Complexity : O(N)

// vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//     unordered_map<int, int> freq;

//     for(int i=0;i<nums1.size();i++){
//         freq[nums1[i]]++;
//     }

//     vector<int> ans;

//     for(int i=0;i<nums2.size();i++){
//         if(freq.count(nums2[i]) == 1 && freq[nums2[i]] > 0){
//             ans.push_back(nums2[i]);
//             freq[nums2[i]]--;
//         }
//     }

//     return ans;
// }


// Time Complexity : O(N)
// Space Complexity : O(1) (except ans vector to return the result)

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;

    for (int i = 0; i < nums1.size(); i++)
    {
        int num = nums1[i];
        vector<int> :: iterator itr = find(nums2.begin(), nums2.end(), num);
        if (itr != nums2.end())
        {
            ans.push_back(num);
            nums2.erase(itr);
        }
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> vec1(n);
    vector<int> vec2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> vec2[i];
    }

    vector<int> ans = intersect(vec1, vec2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}