#include <cstdio>
#include <algorithm>

using namespace std;

int a[15], t, ans;
int main(){
	for (int i = 1; i <= 10; i++)
		scanf("%d", &a[i]);
	scanf("%d", &t);
	for (int i = 1; i <= 10; i++){
		if (t + 30 >= a[i]){
			ans++;
		}
	}
	printf("%d", ans);
	return 0;
}
