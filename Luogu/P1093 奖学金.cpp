#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct student{
    int sum, chi, id;
    bool operator < (const student & t) const{
        if (sum != t.sum) return sum > t.sum;
        if (chi != t.chi) return chi > t.chi;
        return id < t.id;
    }
}node[305];
int n, x, y;
int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d%d%d", &node[i].chi, &x, &y);
        node[i].sum = node[i].chi + x + y;
        node[i].id = i;
    }
    sort(node+1, node+n+1);
    for (int i = 1; i <= 5; ++i){
        printf("%d %d\n", node[i].id, node[i].sum);
    }
    return 0;
}