#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> path;

void solver(int n, pair<char, int> from, pair<char, int> to,
            pair<char, int> via) {
  if (n == 0) return;

  solver(n - 1, from, via, to );
  pair<int, int> temp = {from.second, to.second};
  path.push_back(temp);
  solver(n - 1, via, to, from);
}

int main() {
  int n;
  cin >> n;

  pair<char, int> a = {'A', 1};
  pair<char, int> b = {'B', 2};
  pair<char, int> c = {'C', 3};

  solver(n, a, c, b );

  cout << path.size() << endl;
  for (auto i : path) {
    cout << i.first << " " << i.second << endl;
  }
  return 0;
}