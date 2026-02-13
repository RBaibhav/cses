#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  if (n == 1) {
    cout << 1;
    return 0;
  }
  
  if (n <= 3) {
    cout << "NO SOLUTION";
    return 0;
  } 

  vector<int> ans;
  for (int i = 2; i <= n; i += 2) {
    ans.push_back(i);
  }

  for (int i = 1; i <= n; i += 2) {
    ans.push_back(i);
  }
  
  for (int i : ans) cout << i << " ";

  return 0;
}