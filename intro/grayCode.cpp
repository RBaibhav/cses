#include <bits/stdc++.h>
using namespace std;

void grayCode(int n, int idx, string s) {
  if (idx == n) {
    cout << s << "\n";
    return;
  }

  string temp_0 = s + '0';
  string temp_1 = s + '1';
  grayCode(n, idx + 1, temp_0);
  grayCode(n, idx + 1, temp_1);
}

vector<string> solver(int n) {
  if (n == 1) {
    return {"0", "1"};
  }

  vector<string> a = solver(n - 1);
  vector<string> b = a;
  reverse(b.begin(), b.end());

  for (string& s : a) {
    s += '0';
  }
  for (string& s : b) {
    s += '1';
  }

  a.insert(a.end(), b.begin(), b.end());
  return a;
}

int main() {
  int n;
  cin >> n;

  vector<string> ans = solver(n);

  for (string s : ans) {
    cout << s << "\n";
  }
  return 0;
}

/*

  3
  000
  001
  011
  010
  110
  100
  101
*/