#include <stdio.h>

int main() {

	int integerVar;
	float floatVar;
	char charVar;
	double doubleVar;

	printf("Enter an integer value: ");
	scanf("%d" , &integerVar);

	printf("Enter a float value: ");
	scanf("%f", &floatVar);

	printf("Enter a character: ");
	scanf(" %c", &charVar);

	printf("Enter a double value: \n ");
	scanf("%lf", &doubleVar);



	if (integerVar > 1) {
		printf("Integer variable is greater than 1.\n");
	}
	else {
		printf("Integer variable is not greater than 1.\n");
	}

	if (floatVar < 10.5) {
		printf("Float variable is less than 10.5\n");
	}
	else {
		printf("Float variable is not less than 10.5\n");
	}


	if (charVar != 'a') {
		printf("Character variable does not equal the letter 'a'.\n");
	}
	else {
		printf("Character variable does equal the letter 'a'.\n");
	}

	if (doubleVar >= 5.0) {
		printf("The double is greater than or equal to 5.0.\n");
	}
	else {
		printf("The double is less than 5.0.\n");
	}

	return 0;
}

