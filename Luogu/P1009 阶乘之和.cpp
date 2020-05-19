#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int s[20005] = {0, 1}, a[20005] = {0, 1}, n; // s is sum of a
int lena = 1, lens = 1;
void cheng(int k){ // a * k
    for (int i = 1; i <= lena; i++){
        a[i] *= k;
    }
    for (int i = 1; i <= lena; i++){
        a[i+1] += a[i] / 10;
        a[i] %= 10;
    }
    while (a[lena+1]){
        lena++;
        a[lena+1] = a[lena] / 10;
        a[lena] %= 10;
    }
}
void jia(){ // s + a
    int len = max(lens, lena);
    for (int i = 1; i <= len; i++){
        s[i] += a[i];
        s[i+1] += s[i] / 10;
        s[i] %= 10;
    }
    if (s[len+1]) len++;
    lens = len;
}
void print(){
    for (int i = lens; i >= 1; i--){
        printf("%d", s[i]);
    }
}
int main(){
    scanf("%d", &n);
    for (int i = 2; i <= n; i++){
        cheng(i); jia();
    }
    print();
    return 0;
}