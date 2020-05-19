#include <cstdio>

using namespace std;

int k, n; double s = 0.0;
int main(){
	scanf("%d", &k);
	while (s <= k){
		n++;
		s += (1.0) / (n * 1.0);
	}
	printf("%d", n);
	return 0;
}
