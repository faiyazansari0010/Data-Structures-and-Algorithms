Skip to content

    main.cpp

        commonChars
            Selection deleted
                //         if(check.count(c) == 0){

                //             for(int j=0; j<words.size(); j++){

                //                 string temp = words[j];
                //                 int cnt = count(temp.begin(), temp.end(), c);
                //                 minCount = min(minCount, cnt);
                //             }

                //             while(minCount--){
                //                 str += c;
                //             }

                //             int len = str.size();

                //             if(str.size() != 0){
                //                 while(len--){
                //                     string d = "";
                //                     d = c;
                //                     ans.push_back(d);
                //                 }
                //             }

                //             check.insert(c);
                //         }
                //     }

                //     return ans;
                // }

                vector<string>
                commonChars(vector<string> &words)
{

    unordered_map<char, int> minFrequency;

    for (int i = 0; i < words[0].size(); i++)
    {
        minFrequency[words[0][i]] = 101;
    }

    set<char> check;

    for (int i = 0; i < words[0].size(); i++)
    {

        char currChar = words[0][i];

        if (check.count(currChar) == 0)
        {

            for (int j = 0; j < words.size(); j++)
            {

                int cnt = count(words[j].begin(), words[j].end(), currChar);
                minFrequency[currChar] = min(minFrequency[currChar], cnt);
            }

            check.insert(currChar);
        }
    }

    vector<string> ans;

    for (auto it : minFrequency)
    {
        if (it.second > 0)
        {
            int charFreq = it.second;
            while (charFreq--)
            {
                string str = "";
                str = it.first;
                ans.push_back(str);
            }
        }
    }

    return ans;
}

int main()
{

    int size;
    cin >> size;

    Ln 56, Col 1

           History

               Enable "Accessible Terminal" in Workspace Settings to use a screen reader with the console.Booting ReplReady
                   Replit