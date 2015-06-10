#include <stdio.h>
#include <stdlib.h>

int main() {
	// Start stuff and asks for user input, 'cuz too lazy for files.
	int i, j, k, menor;
	int n;
	printf("Insert a number, where your number is the n on the nxn matrix of log piles\n");
	scanf("%d", &n);
	printf("%d\n", n);
	int logs;
	printf("Insert a number, your lumber is the number of logs to be added to the block\n");
	scanf("%d", &logs);
	int grid[n][n];
	printf("Insert the number of logs in each pile already on your block.\n Insert a number, press enter and then the other number");
	

	// Scans your ins for the number of logs in each pile
	for(i=0; i<n; i++){
		for(j=0; j<n; j++) {
			scanf("%d ", &grid[i][j]);
		}
	}
	
	// Prints the size of each pile as in an matrix
	for(i=0; i<n; i++){
		printf("\n");
		for(j=0; j<n; j++) {
			printf("%d ", grid[i][j]);
		}
	}

	// In order, left->right-up->down, adds 1 more log in a pile with the same number as the smallest one
	// Then updates the number os logs and the size of the smaller one if needed.
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

	// Prints your final grid.
	for(i=0; i<n; i++){
		printf("\n");
		for(j=0; j<n; j++) {
			printf("%d ", grid[i][j]);
		}
	}

	return 0;
}