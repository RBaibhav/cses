#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;

  int totalZeros = 0;
  for (long long i = 5; i <= n; i *= 5){
    totalZeros += n / i;
      
  }
  
  cout << totalZeros << "\n";
    
    return 0;
}