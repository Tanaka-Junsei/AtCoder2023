#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, p;
    cin >> a >> b;

    p = a*b;

    if (p%2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}