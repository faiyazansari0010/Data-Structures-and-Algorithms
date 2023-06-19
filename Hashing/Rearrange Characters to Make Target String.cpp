#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int rearrangeCharacters(string s, string target)
{
  unordered_map<char, int> charCount;
  int count = 0;

  for (int i = 0; i < s.size(); i++)
  {
    charCount[s[i]]++;
  }

  string str = "";

  bool flag = true;
  while (flag == true)
  {

    for (int i = 0; i < target.size(); i++)
    {
      if (charCount[target[i]] > 0)
      {
        str += target[i];
        charCount[target[i]]--;
      }

      else
      {
        flag = false;
        break;
      }
    }

    if (str.size() == target.size())
    {
      count++;
      str = "";
    }
  }

  return count;
}

int main()
{
  string s, target;
  cin >> s;
  cin >> target;

  cout << rearrangeCharacters(s, target);
  return 0;
}