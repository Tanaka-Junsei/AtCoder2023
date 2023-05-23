/*#include <bits/stdc++.h>
using namespace std;

int main() {
int counter_plus, counter_minus, sum = 0;
string S;
cin >> S;

  // ここにプログラムを追記
int length = S.size();
  for (int i = 0; i < length; i++){

    if (i % 2 == 1){
        if (S.at(i) == '+'){
            counter_plus ++;
        }else{
            counter_minus ++;
        }
    }
    }
    sum = 1 + counter_plus - counter_minus;
    cout << sum << endl;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // 計算結果を保持する変数
  int answer = 1;

  for (int i = 0; i < S.size(); i++) {

    if (S.at(i) == '+') {
      answer++;
    }
    if (S.at(i) == '-') {
      answer--;
    }

  }

  cout << answer << endl;
}
