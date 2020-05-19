#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 105;
const int maxv = 30005;
int f[maxv], v[maxn], w[maxn], n, m;
int main(){
	scanf("%d%d", &m, &n);
	for (int i = 1; i <= n; i++){
		scanf("%d%d", &v[i], &w[i]);
		w[i] *= v[i];
		for (int j = m; j >= 0; j--){
			if (j - v[i] >= 0){
				f[j] = max(f[j], f[j - v[i]] + w[i]);
			}
		}
	}
	printf("%d", f[m]);
	return 0;
}
