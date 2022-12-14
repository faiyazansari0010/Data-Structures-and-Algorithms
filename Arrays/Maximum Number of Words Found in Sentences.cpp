// 2114. Maximum Number of Words Found in Sentences

// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
// You are given an array of strings sentences, where each sentences[i] represents a single sentence.
// Return the maximum number of words that appear in a single sentence.

#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int counter, ans = 0;
        for(int i=0;i<n;i++){
            counter = 0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' '){
                    counter++;
                }
            }
            if(ans < counter){
                ans = counter;
            }
        }
        return ans + 1;
    }

int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> sentences(n);
    for(int i=0;i<n;i++){
        getline(cin, sentences[i]);
    }

    cout<<mostWordsFound(sentences);
    return 0;
}