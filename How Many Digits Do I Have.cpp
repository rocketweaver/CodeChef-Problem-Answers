#include<stdio.h>

int main() {
	int n;
	
	scanf("%d", &n);
	
	if(n >= 1000) {
		puts("More than 3 digits");
	} else if(n >= 100 && n < 1000) {
		puts("3");
	} else if(n < 100 && n >= 10) {
		puts("2");
	} else {
		puts("1");
	}
	
	return 0;
}
