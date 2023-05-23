#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int high = 0, row = 0, deff = 0;
  high = max(max(A, B), C);
  row = min (min(A, B), C);

  deff = high - row;

  cout << deff << endl;
}
