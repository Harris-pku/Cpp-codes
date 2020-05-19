#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

long long n, i, j, a[505];
int main(){
    cin >> n;
    a[0] = 1;
    cout << floor(log(2) / log(10) * n + 1) << endl;
    for (i = 0; i < n - 55; i = i + 55){
        for (j = 0; j < 501; j++){
            if (!a[j])
                continue;
            a[j] = a[j] * 36028797018963968;
        }
        for (j = 0; j < 501; j++)
            if (a[j] > 9)
                a[j + 1] += a[j] / 10, a[j] %= 10;
    }
    for (; i < n; i++){
        for (j = 0; j < 501; j++){
            if (a[j] == 0)
                continue;
            a[j] *= 2;
        }
        for (j = 0; j < 501; j++)
            if (a[j] > 9)
                a[j + 1] += a[j] / 10, a[j] %= 10;
    }
    for (i = 499; i > 0; i--){
        cout << a[i];
        if (i % 50 == 0){
            cout << endl;
        }
    }
    cout << a[0] - 1;
    return 0;
}
