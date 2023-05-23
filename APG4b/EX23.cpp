#include <bits/stdc++.h>
using namespace std;


/*自分でやったけど、詰まった
int main(){
    
    int N;
    cin >> N;// 要素数を受け取る
    using frequency = int;
    map<int, frequency> numbers; // <その値(key)、 その出現回数(value)>を格納するmap
    vector<int> num(N); // 受け取る要素を格納するための配列
    
    int n, f; // n:その数字 f:nの出現回数

    for(int i = 0; i < N; i++){
        cin >> n;
        num.at(i) = n;
    }

    sort(num.begin(), num.end());

    for (int i = 0; i < N; i++){
        if (i = 0){
            numbers[num.at(0)] = 1;
        }else{
            if (num.at(i) == num.at(i - 1)){
                numbers[num.at(i)]++;
            }else{
                numbers[num.at(i)] = 1;
            }
        }
    }

    int max_key = 0; // frequencyが最大のkeyを格納

    for (int i = 0; i < N; i++){
        
    }
}
*/

int main(){

    int N;
    cin >> N;// 要素数を受け取る
    using frequency = int;
    map<int, frequency> numbers; // <その値(key)、 その出現回数(value)>を格納するmap
    vector<int> num(N); // 受け取る要素を格納するための配列
    
    int n, f; // n:その数字 f:nの出現回数

    for(int i = 0; i < N; i++){
        cin >> n;
        num.at(i) = n;
    }

    for (int x : num){ // 配列の値全部にアクセスする
        if (numbers.count(x)){ // この論理式でpyでいうinができる(ifの動作条件がboolなのを利用)
            numbers.at(x)++; // 含まれてるならインクリメント(numbers[x]だと勝手に追加されちゃうかもだからnumbers.at(x)を使用)
        }else{
            numbers[x] = 1; // 含まれていなかったから、keyがxのところに1を追加する。これで、勝手にkey:valueの組が埋まってく
        }
    }

    int max_cnt = 0; // その時点での出現回数最大のkeyのvalueを格納
    int ans = 0; // 最終的に出力する値を格納(keyをいれる)
    for (int x : num){
        if (max_cnt < numbers.at(x)){
            max_cnt = numbers.at(x);
            ans = x;
        }
    }

    cout << ans << " " << max_cnt << endl;
}