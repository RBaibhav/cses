#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  vector<int> hsh(26, 0);

  for (char i : n) {
    hsh[i - 'A']++;
  }

  int numberOfOdd = 0;
  string front = "", back = "";
  char odd;

  for (int i = 0; i < hsh.size(); i++) {
    if (hsh[i] % 2 != 0) {
      numberOfOdd++;
      odd = (char)i + 'A';
    }
  }
  
  if (numberOfOdd > 1) {
    cout << "NO SOLUTION\n";
    return 0;
  }
  
  for (int i = 0; i < hsh.size(); i++) {
    string temp(hsh[i] / 2, (char)i + 'A');
    front += temp;
  }

  back = front;
  reverse(back.begin(), back.end());

  /*
  for (int i = 0; i < hsh.size(); i++) {
    if (numberOfOdd > 1) {
      cout << "NO SOLUTION\n";
      return 0;
    }
    if (hsh[i] % 2 == 0) {
      int temp = hsh[i];
      while (temp != 0) {
        front.push_back((char)i + 'A');
        back.insert(0, 1, (char)i + 'A');
        temp -= 2;
      }
    } else {
      odd = (char)i + 'A';
      numberOfOdd++;
      hsh[i]--;
      i--;
    }
  }
    */

  if (numberOfOdd == 1) {
    front.push_back(odd);
  }
  cout << front + back << "\n";

  return 0;
}