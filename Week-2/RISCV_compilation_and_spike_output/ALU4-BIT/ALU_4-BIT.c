#include <stdio.h>
#include <stdint.h>

int8_t add(int8_t number1, int8_t number2)	{
	return ((number1 + number2) & 0xF);
}

int8_t sub(int8_t number1, int8_t number2)	{
	return ((number1 - number2) & 0xF);
}

int8_t mul(int8_t number1, int8_t number2)	{
	return ((number1 * number2) & 0xF);
}

int8_t div(int8_t number1, int8_t number2)	{
	return ((number1/number2) & 0xF);
}

int8_t mod(int8_t number1, int8_t number2)	{
	return ((number1 % number2) & 0xF);
}

int8_t bitwise_not(int8_t number)	{
	return (~number & 0xF);
}

int8_t bitwise_or(int8_t number1, int8_t number2)	{
	return((number1 | number2) & 0xF);
}

int8_t bitwise_and(int8_t number1, int8_t number2)	{
	return((number1 & number2) & 0xF);
}

int main(void)	{
	int8_t number1, number2, number;
	int8_t result;
	uint8_t operation;

	printf("Choose the opeartion you want to proceed with.\n");
	printf("Enter '+' for adding two numbers.\n");
	printf("Enter '-' for subtracting two numbers.\n");
	printf("Enter '*' for multiplying two numbers.\n");
	printf("Enter '/' for dividing two numbers.\n");
	printf("Enter 'm' for modulus operator.\n");
	printf("Enter '!' for inverting the number.\n");
	printf("Enter '|' for OR opeation on the numbers.\n");
	printf("Enter '&' for AND operation on the numbers.\n");
	printf("Enter your operation here : ");
	scanf("%c", &operation);

	switch(operation)	{
		case '+':
			printf("Enter first 4-Bit number (0-15): ");
			scanf("%hhd", &number1);
			printf("Enter second 4-Bit number (0-15): ");
			scanf("%hhd", &number2);
			number1 &= 0xF;
			number2 &= 0xF;
			result = add(number1, number2);
			printf("Result of %d + %d = %d\n", number1, number2, result);
			break;
		case '-':
			printf("Enter first 4-Bit number (0-15): ");
			scanf("%hhd", &number1);
			printf("Enter second 4-Bit number (0-15): ");
			scanf("%hhd", &number2);
			number1 &= 0xF;
			number2 &= 0xF;
			result = sub(number1, number2);
			printf("Result of %d - %d = %d\n", number1, number2, result);
			break;
		case '*':
			printf("Enter first 4-Bit number (0-15): ");
			scanf("%hhd", &number1);
			printf("Enter second 4-Bit number (0-15): ");
			scanf("%hhd", &number2);
			number1 &= 0xF;
			number2 &= 0xF;
			result = mul(number1, number2);
			printf("Result of %d * %d = %d\n", number1, number2, result);
			break;
		case '/':
			printf("Enter first 4-Bit number (0-15): ");
			scanf("%hhd", &number1);
			printf("Enter second 4-Bit number (0-15): ");
			scanf("%hhd", &number2);
			number1 &= 0xF;
			number2 &= 0xF;
			result = div(number1, number2);
			printf("Result of %d/%d = %d\n", number1, number2, result);
			break;
		case 'm':
			printf("Enter first 4-Bit number (0-15): ");
			scanf("%hhd", &number1);
			printf("Enter second 4-Bit number (0-15): ");
			scanf("%hhd", &number2);
			number1 &= 0xF;
			number2 &= 0xF;
			result = mod(number1, number2);
			printf("Result of %d mod %d = %d\n", number1, number2, result);
			break;
		case '!':
			printf("Enter 4-Bit number (0-15): ");
			scanf("%hhd", &number);
			number &= 0xF;
			result = bitwise_not(number);
			printf("Result of !%d = %d\n", number, result);
			break;
		case '|':
			printf("Enter first 4-Bit number (0-15): ");
			scanf("%hhd", &number1);
			printf("Enter second 4-Bit number (0-15): ");
			scanf("%hhd", &number2);
			number1 &= 0xF;
			number2 &= 0xF;
			result = bitwise_or(number1, number2);
			printf("Result of %d | %d = %d\n", number1, number2, result);
			break;
		case '&':
			printf("Enter first 4-Bit number (0-15): ");
			scanf("%hhd", &number1);
			printf("Enter second 4-Bit number (0-15): ");
			scanf("%hhd", &number2);
			number1 &= 0xF;
			number2 &= 0xF;
			result = bitwise_and(number1, number2);
			printf("Result of %d & %d = %d\n", number1, number2, result);
			break;
		default:
			printf("Invalid Operation\n");
	}

	return 0;

}
