#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記

  int a, b, c, d, e;
  a = data.at(0);
  b = data.at(1);
  c = data.at(2);
  d = data.at(3);
  e = data.at(4);

  if (a == b || b == c || c == d || d == e){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
    }

  
}
