#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, menor;
	int n;
	printf("Insert a number, where your number is the n on the nxn matrix of log piles\n");
	scanf("%d", &n);
	printf("%d\n", n);
	int logs;
	printf("Insert a number, your lumber is the number of logs to be added to the block\n");
	scanf("%d", &logs);
	int grid[n][n];
	printf("Insert the number on your block.\n Insert a number, press enter and then the other number");
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++) {
			scanf("%d ", &grid[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		printf("\n");
		for(j=0; j<n; j++) {
			printf("%d ", grid[i][j]);
		}
	}

	menor = 0;
	while ( logs > 0){
		for(i=0; i<n; i++){
			for(j=0; j<n; j++) {
				if (grid[i][j] == menor && logs > 0) {
					grid[i][j]++;
					logs--;
				}
			}
		}
		menor++;
	}

	for(i=0; i<n; i++){
		printf("\n");
		for(j=0; j<n; j++) {
			printf("%d ", grid[i][j]);
		}
	}

	return 0;
}