	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>

	long long reverse(long long a) {
		long long aux;
		long long rev = 0;
		while(a > 0){
			aux = a%10;
			rev = rev*10 + aux;
			a = a/10;
		}
		return rev;
	}

	long long reverse2(long long a) {
		long long aux;
		long long rev = 0;
		while(a>0){
			lldiv_t longdiv = lldiv(a, 10);
			rev = rev*10 + longdiv.rem;
			a = longdiv.quot;
		}
		return rev;
	}

	int main() {
		long long cont;
		long long input;
		long long rev;
		long long original;

		scanf("%d", &input);
		rev = reverse2(input);
		original = input;

		if(rev == input) {
			printf("The input was already palindromic\n");
			return 0;
		}

		while(rev!=input) {
			input = rev + input;
			rev = reverse2(input);
			cont ++;

		//printf("%d = %d\n",input, rev );
		}

		printf("%lu is the palindromic of %lu, it took %lu sums with the reverse.\n", input, original, cont);


		return 0;
	}