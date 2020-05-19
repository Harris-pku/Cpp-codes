#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int n, a;
int main(){
	scanf("%d", &n);
	for (int i = n; i > 0; --i){
		scanf("%d", &a);
	 	if (!a) continue;
	 	if (a>0){
		 	if (i != n) printf("+");
			if (a != 1) printf("%d", a);
			if (i != 1) printf("x^%d", i);
			else printf("x");
	    } 
	 	if (a<0){
		 	if (a != -1) printf("%d", a);
	        else printf("-");
			if (i != 1) printf("x^%d", i);
			else printf("x");
	 	}
	}
	scanf("%d", &a);
	if (a>0 && n) printf("+%d", a);
	if (a < 0) printf("%d", a);
	if (a>=0 && n==0) printf("%d", a);
	return 0;
}
