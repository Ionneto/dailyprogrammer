#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(int a) {
	int aux;
	int rev = 0;
	while(a > 0){
		aux = a%10;
		rev = rev*10 + aux;
		a = a/10;
	}
	return rev;
}

int main() {
	int cont;
	int input;
	int rev;
	int original;

	scanf("%d", &input);
	rev = reverse(input);
	original = input;

	if(rev == input) {
		printf("The input was already palindromic\n");
		return 0;
	}

	while(rev!=input) {
		input = rev + input;
		rev = reverse(input);
		cont ++;
	}

	printf("%d is the palindromic of %d, it took %d sums with the reverse.\n", input, original, cont);


	return 0;
}