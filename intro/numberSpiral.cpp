#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  vector<long long> ans;
  while (t != 0) {
    t--;
    long long r, c;

    cin >> r >> c;

    // the spiral can be divided into 3 sections, the diagonal, when r >  c and when c > r
    // and in the case c > r and r > c => when c is even and when r is even  
    if (r == c) {
      ans.push_back(r * r - r + 1);
    } else if (r > c) {
      long long dia = r * r - r + 1;
      if (r % 2 == 0) {
        ans.push_back(dia + r - c);
      } else {
        ans.push_back(dia - r + c);
      }
    } else {
      long long dia = c * c - c + 1;
      if (c % 2 == 0) {
        ans.push_back(dia - c + r);
      } else {
        ans.push_back(dia + c - r);
      }
    }
  }

  for (long long i : ans) {
    cout << i << endl;
  }

  return 0;
}