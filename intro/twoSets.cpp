#include <bits/stdc++.h>
using namespace std;

// a : 6 5 2 1
// b : 7 4 3
// greedy approch : start iterate form n and into two sets, keep adding element to the set with smaller sum,

int main() {
  int n;
  cin >> n;

  long long sum = n * (n + 1) / 2;

  if (sum % 2 != 0) {
    cout << "NO" << endl;
  } else {
    vector<int> a, b;

    long long A = 0, B = 0;

    for (int i = n; i > 0; i--) {
      if (A > B) {
        b.push_back(i);
        B += i;
      } else {
        a.push_back(i);
        A += i;
      }
    }

    cout << "YES" << "\n" << a.size() << "\n";
    for (long long i : a) {
      cout << i << " ";
    }
    cout << endl << b.size() << "\n";

    for (long long i : b) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}