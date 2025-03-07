/* A function performs an operation on two doubles, which are passed as parameters. 
The function returns a double containing the result of the operation. 
In addition, it is also specified which operation should be performed: 
addition, subtraction, multiplication, etc. Implement this in a 
flexible way so that additional operations can be added later
without having to modify the function.
*/

#include <stdio.h>
#include <stdint.h>

void showBinary(uint8_t n)
{
	for (int i = 7; i >= 0; i--)
	{
		printf("%d", (n >> i) & 1);
	}
}

int main()
{
	uint8_t number;
	uint8_t choice, bit_position;
	printf("Enter a number (0-255): ");
	scanf_s("%hhu", &number);
	// show operations:
	printf("\Choose an operation:\n");
	printf("1. Set bit\n");
	printf("2. Clear bit\n");
	printf("3. Read bit\n");
	printf("4. Toggle bit\n");
	printf("Your choice: ");
	scanf_s("%hhu", &choice);
	printf("Bit position (0-7): ");
	scanf_s("%hhu", &bit_position);
	if (bit_position < 0 || bit_position >7)
	{
		printf("Invalid bit position!");
		return 1;
	}
	showBinary(number);

	switch (choice)
	{
	case 1: // set bit
		number = number;
		break;
	case 2: // clear bit
		number = number;
		break;
	case 3: // read bit
		number = number;
		break;
	case 4: // toggle bit
		number = number;
		break;
	default:
		printf("Invalid choice\n");
		break;
	};

	printf("The new number is: %d\n", number);
	printf("The binary version of the new number is:");
	showBinary(number);

	return 0;
	}
