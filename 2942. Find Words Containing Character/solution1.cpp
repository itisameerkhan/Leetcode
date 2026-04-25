class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result(words.size(),-1);
        vector<int> output;
        for(int i=0;i<words.size();i++) {
            for(int j=0;j<words[i].size();j++) {
                if(x==words[i][j] && result[i]==-1) {
                    result[i]=i;
                    output.push_back(i);
                }
            }
        }
        return output;
    }
};