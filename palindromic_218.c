	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>

	unsigned long long reverse(unsigned long long a) {
		unsigned long long aux;
		unsigned long long rev = 0;
		printf("%llu\n", a);
		while(a > 0){
			aux = a%10;
			rev = rev*10 + aux;
			printf("%llu %llu\n", aux, rev);
			a = a/10;
			printf("%llu\n", a);
		}
		return rev;
	}

	unsigned long long reverse2(unsigned long long a) {
		unsigned long long aux;
		unsigned long long rev = 0;
		while(a>0){
			lldiv_t longdiv = lldiv(a, 10);
			rev = rev*10 + longdiv.rem;
			a = longdiv.quot;
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

		printf("%llu is the palindromic of %llu, it took %llu sums with the reverse.\n", input, original, cont);


		return 0;
	}

