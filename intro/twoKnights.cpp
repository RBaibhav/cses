#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  // way 1
  // 2344444432
  // 3466666643
  // 4688888864
  // 4688888864
  // 4688888864
  // 4688888864
  // 4688888864
  // 4688888864
  // 3466666643
  // 2344444432
  for (long long n = 1; n <= t; n++) {
    long long size = n * n;
    long long totalWays = size * (size - 1) / 2;
    long long wrongWays = 0;
    wrongWays += 8 * (n - 4) * (n - 4);
    wrongWays += 6 * (n - 4) * 4;
    wrongWays += 4 * (n - 3) * 4;
    wrongWays += 3 * 8;
    wrongWays += 2 * 4;
    wrongWays /= 2;

//    cout << totalWays - wrongWays << endl;
  }

  // way two
  for (int i = 1; i <= t; i++) {
    long long n = i * i;
    long long totalWays = n * (n - 1) / 2;
    // one window is 2 x 3  taken both horizontally and vertically
    long long totalWindows = 2 * (i - 1) * (i - 2);
    long long totalWrongWays = totalWindows * 2;

    cout << totalWays - totalWrongWays << endl;
  }

  return 0;
}