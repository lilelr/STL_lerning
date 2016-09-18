
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define LL long long

map<string, int> cnt;
vector<string> words;
set<string> ans;

string word_handle(string& word) {
  string temp_word = word;
  for (int i = 0; i < temp_word.size(); i++) {
    temp_word[i] = tolower(temp_word[i]);
  }
  sort(temp_word.begin(), temp_word.end());
  return temp_word;
}

int main() {
//  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/in", "r",
//          stdin);
//  freopen("/Users/yuxiao/XcodeProject/STL_Learning/STL_Learning/out", "w",
//          stdout);
  string str;
  while (cin >> str) {
    if (str[0] == '#') {
      break;
    }

    words.push_back(str);
  }

  for (int i = 0; i < words.size(); i++) {
    string temp_word = word_handle(words[i]);
    if (!cnt.count(temp_word)) {
      cnt[temp_word] = 0;
    }
    cnt[temp_word]++;
  }
  for (int i = 0; i < words.size(); i++) {
    string temp_word = word_handle(words[i]);
    if (cnt[temp_word] == 1) {
      ans.insert(words[i]);
    }
  }

  for (set<string>::iterator it = ans.begin(); it != ans.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}
