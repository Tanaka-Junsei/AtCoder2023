#include <bits/stdc++.h>
using namespace std;

/*int main() {
  int N, A, B;
  cin >> N >> A;
  string op;

  // ここにプログラムを追記
  for (int i = 0; i < N; i++){
    cin >> op >> B;
    if (op == "+"){
      A += B;
      cout << i + 1 << ":" << A << endl;
    }else if (op == "-"){
      A -= B;
      cout << i + 1 << ":" << A << endl;
    }else if (op == "*"){
      A *= B;
      cout << i + 1 << ":" << A << endl;
    }else if (op == "/"){
      if (B != 0)
        A /= B;
      cout << i + 1 << ":" << A << endl;
      }else {
        cout << "error" << endl;
    }
    }
    
}*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  for (int i = 0; i < N; i++) {
    int x;
    string op;
    cin >> op >> x;

    if (op == "+") {
      A += x;
    }
    else if (op == "-") {
      A -= x;
    }
    else if (op == "*") {
      A *= x;
    }
    else if (op == "/" && x != 0) {
      A /= x;
    }
    else {
      cout << "error" << endl;
      break;
    }

    cout << i + 1 << ":" << A << endl;
  }

}

