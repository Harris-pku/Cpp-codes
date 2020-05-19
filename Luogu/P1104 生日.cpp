#include <iostream>    
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;    

struct ti{
    string name;
    long long sum;
    bool operator < (const ti & x) const{
        return sum < x.sum;
    }
}a[10001];
int n, x, y, z;
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i].name >> x >> y >> z;
	    a[i].sum = x*10000000 + y*100000 + z*1000 + 100 - i;
    }
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++){
        cout<<a[i].name<<endl;
    }
    return 0;
}
