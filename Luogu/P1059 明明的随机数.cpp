#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int a[1005], n, cur, tot;
int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf("%d", &cur);
        if (!a[cur]) tot++; a[cur] = 1;
    }
    printf("%d\n", tot);
    for (int i = 1; i <= 1000; i++)
        if (a[i]) printf("%d ", i);
    return 0;
}