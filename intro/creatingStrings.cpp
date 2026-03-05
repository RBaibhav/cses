#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> ans;

void build(string s, vector<int>& freq) {
  if (s.length() == n) {
    ans.push_back(s);
    return;
  }

  for (int i = 0; i < 26; i++) {
    if (freq[i] > 0) {
      freq[i]--;
      build(s + char('a' + i), freq);
      freq[i]++;
    }
  }
}

int main() {
  string s;
  cin >> s;

  vector<int> freq(26, 0);
  for (char c : s) {
    freq[c - 'a']++;
  }
  n = s.length();

  build("", freq);

  cout << ans.size() << "\n";
  for (string t : ans) {
    cout << t << "\n";
  }
}

/*
string s;
  cin >> s;

  sort(s.begin(), s.end());

  vector<string> ans;

  do {
    ans.push_back(s);
  } while (next_permutation(s.begin(), s.end())); // O(N! * N) time complexity

  cout << ans.size() << "\n";
  for (string temp : ans) {
    cout << temp << "\n";
  }

  return 0;


*/