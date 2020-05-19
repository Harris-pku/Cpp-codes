#include <algorithm>
#include <cstring>
#include <iostream>
#include <cstdio>

using namespace std;

int f[35][35], n, m;
int main(){
    scanf("%d%d", &n, &m); f[0][1] = 1;
    for (int k = 1; k <= m; ++k){
        f[k][1] = f[k-1][2] + f[k-1][n];
        for (int i = 2; i < n; ++i)
            f[k][i] = f[k-1][i-1] + f[k-1][i+1];
        f[k][n] = f[k-1][n-1] + f[k-1][1];
    }
    printf("%d", f[m][1]);
    return 0;
}
