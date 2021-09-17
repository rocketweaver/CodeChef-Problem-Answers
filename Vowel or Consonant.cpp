#include<stdio.h>

int main() {
	char C;
	
	scanf("%c", &C);
	
	if(C == 'A' || C == 'E' || C == 'O' || C == 'U' || C == 'a' || C == 'e' || C == 'o' || C == 'u') {
		puts("Vowel");
	} else {
		puts("Consonant");
	}
	
	return 0;
}
