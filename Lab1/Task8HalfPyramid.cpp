#include <stdio.h>
#pragma warning(disable : 4996)
int upperCasePyramid(int n);
int numberPyramid(int n);

int main()
{
	//user input to char
	printf("Enter a digit or an uppercase letter: ");
	char n;
	scanf("%c", &n);

	//branching depending on input
	if (47 <n && n < 58)
	{
		numberPyramid(n);
	}
	else if (64 < n && n < 91)
	{
		upperCasePyramid(n);
	}
	else
	{
		printf("Error! Input must be a digit 1-9 or an uppercase letter");
	}
	return 0;

}

int numberPyramid(int n)
{
	//Prints half a pyramid, with each row consisting of a number of ascending digits, starting at 1.

	
	int x = n-48;			//ASCII char conversion to int
	int i = 0;
	while (i <= x)			//prints rows to make up half a pyramid
	{
		int i2 = 1;
		while (i2 <= i)		//prints characters to make up a row
		{
			printf("%d",i2);
			i2++;
		}
		printf("\n");		//ends a row
		i++;
	}
	return 0;
}

int upperCasePyramid(int n)
{
	//Prints half a pyramid, with each row consisting of several characters of the next letter in the alphabet from previous row.

	int i = 64;				//ASCII 65 =A	-1 to get a leading whitespace
	while (i <= n)			//prints rows to make up half a pyramid
	{
		int i2 = n - i;
		while (i2 < n-64)	//prints characters to make up a row
		{
			printf("%c", i);
			i2++;
		}
		printf("\n");		//ends a row
		i++;
	}
	return 0;
}