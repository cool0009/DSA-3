#include <bits/stdc++.h>
using namespace std;

void printAnagramsTogether(vector<string> wordArr) {
    unordered_map<string, vector<string> > mp;
    for (int i = 0; i < wordArr.size(); i++) {
        string word = wordArr[i];
        sort(word.begin(), word.end());
        mp[word].push_back(wordArr[i]);
    }

    for (auto p : mp) {
        vector<string> anagrams = p.second;
        for (auto str : anagrams)
            cout << str << " ";
    }
}

int main() {
    vector<string> wordArr = {"cat", "dog", "tac", "god", "act"};
    printAnagramsTogether(wordArr);
    return 0;
}