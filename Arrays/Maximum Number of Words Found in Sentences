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
