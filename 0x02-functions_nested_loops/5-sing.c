#include <stdio.h>

int print_sing(int n) {
	if (n > 0) {
		printf("+");
		return 1;
	} else if (n == 0) {
		printf("0");
		return 0;
	} else {
		printf("-");
		return -1;
	}
}


int main () {
	int number;
	printf("Enter anumber:");
	scanf("%d", &number);

	int result = print_sing(number);
	printf("\n");
	printf("Returned value: %d\n", result);

	return 0;
}
