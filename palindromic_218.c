	#include <stdio.h>
	#include <stdlib.h>

	unsigned long long reverse(unsigned long long a) {
		unsigned long long aux;
		unsigned long long rev = 0;
		while(a > 0){
			aux = a%10;
			rev = rev*10 + aux;
			a = a/10;
		}
		return rev;
	}

	int main() {
		unsigned long long cont;
		unsigned long long input;
		unsigned long long rev;
		unsigned long long original;

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

		//printf("%d = %d\n",input, rev );
		}

		printf("%lu is the palindromic of %lu, it took %lu sums with the reverse.\n", input, original, cont);


		return 0;
	}