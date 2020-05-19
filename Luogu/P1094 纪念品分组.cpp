#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

int a[30005], m, ans, n, l = 1, r;
int main(){
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    sort(a+1, a+n+1); r = n;
    while (l <= r){
        if(a[l]+a[r] <= m) l++;
        r--; ans++;
    }
    printf("%d", ans);
    return 0;
}