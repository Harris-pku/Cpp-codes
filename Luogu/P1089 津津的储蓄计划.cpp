#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int bud, cur, flag, sum;
int main(){
	for (int i = 1; i <= 12; i++){
		scanf("%d", &bud);
		cur += 300 - bud;
		if (cur < 0){
			flag = i; break;
		}
		else{
			sum += cur / 100 * 100;
			cur %= 100;
		}
	}
	if (flag)
		printf("-%d", flag);
	else
		printf("%d", sum / 100 * 120 + cur);
	return 0;
}
