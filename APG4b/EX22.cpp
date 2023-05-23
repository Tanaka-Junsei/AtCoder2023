#include <bits/stdc++.h>
using namespace std;


/*間違えたやつ
int main(){

    int N;//pairの数
    cin >> N;// 入力
    pair<int, int> p; // 入力されるpairを格納するようのpairを宣言
    vector<pair<int , int>> pairs(N); // pairを格納するための配列pairsを宣言

    for (int i = 0; i < N; i++){
        int a, b; // 入力される値を格納するための変数を宣言
        cin >> a >> b;
        p.first = 0; // aは関係ないから受け取るけど、0を格納 ここで0にしちゃってそのまま出力してるからだめ
        p.second = b; // bでソートするからbだけ受け取り、格納
        pairs.at(i) = p; // pをpairsに格納
    }

    sort(pairs.begin(), pairs.end());

    for (auto c : pairs){
        cout << c.first << " " << c.second << endl;
    }
}
*/

int main(){

    int N;//pairの数
    cin >> N;// 入力
    pair<int, int> p; // 入力されるpairを格納するようのpairを宣言
    vector<pair<int , int>> pairs(N); // pairを格納するための配列pairsを宣言

    for (int i = 0; i < N; i++){
        int a, b; // 入力される値を格納するための変数を宣言
        cin >> a >> b;
        p.first = b; // aは関係ないからfirst要素にbを格納
        p.second = a; // bでソートするからaをsecond要素に格納
        pairs.at(i) = p; // pをpairsに格納
    }

    sort(pairs.begin(), pairs.end());

    for (auto c : pairs){
        cout << c.second << " " << c.first << endl;
    }
}