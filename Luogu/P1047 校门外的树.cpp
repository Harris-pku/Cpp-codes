#include <cstdio>

using namespace std;

int a[10005], n, m, l, r, ans = 0;
int main(){
	scanf("%d%d", &n, &m);
	for (int i = 0; i <= n; i++)
		a[i] = 1;
	for (int i = 1; i <= m; i++){
		scanf("%d%d", &l, &r);
		for (int j = l; j <= r; j++){
			a[j] = 0;
		}
	}
	for (int i = 0; i <= n; i++){
		if (a[i]){
			ans++;
		}
	}
	printf("%d", ans);
	return 0;
}
