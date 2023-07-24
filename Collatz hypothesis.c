#include <stdio.h>

int main() {
	unsigned long int x = 1, chis, chisx, chisxx;
	printf("Its Collatz hypothesis, write any positive number: ");
	scanf("%d", &chis);
	puts("");
	while (chis != 1) {
		printf("%d. ", x);
		if (chis % 2 == 0) {
			chisx = chis / 2;
			printf("%ld\n", chisx);
			// printf("%d / 2 = %d \n", chis, chisx);
			chis = chisx;
		}
		else {
			chisxx = chis * 3 + 1;
			printf("%ld\n", chisxx);
			// printf("%d * 3 + 1 = %d\n", chis, chisxx);
			chis = chisxx;
		}
		++x;
	}
	printf("\n%d moves have been made.\n", x - 1);
}
