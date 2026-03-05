#include <bits/stdc++.h>
using namespace std;

int n;
long long answer = LONG_LONG_MAX;
vector<int> apples;

void solver(int i, long long x, long long y) {
  if (i == n) {
    answer = min(answer, abs(x - y));
    return;
  }

  solver(i + 1, x + apples[i], y);
  solver(i + 1, x, y + apples[i]);
}

void s2(int i, long long diff) {
  if (i == n) {
    answer = min(answer, abs(diff));
    return;
  }
  
  s2(i + 1, diff + apples[i]);
  s2(i + 1, diff - apples[i]);
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    apples.push_back(temp);
  }
  
  s2(0, 0);

  cout << answer << endl;

  return 0;
}