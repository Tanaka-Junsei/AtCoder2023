#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, n = 0;
    cin >> s;

    if (s/100 == 1){
        n++;
    }
    s = s%100;

    if (s/10 == 1){
        n++;
    }
    s = s%10;

    if (s == 1){
        n++;
    }

    printf("%d\n", n);

}