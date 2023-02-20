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
