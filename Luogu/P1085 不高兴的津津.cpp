#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

int x, y, flag, maxx, ans;
int main(){
	for (int i = 1; i <= 7; i++){
		scanf("%d%d", &x, &y);
		if (x + y > 8){
			flag = 1;
			if (x + y > maxx){
				maxx = x + y;
				ans = i;
			}
		}
	}
	if (!flag)
		printf("0");
	else
		printf("%d", ans);
	return 0;
}
