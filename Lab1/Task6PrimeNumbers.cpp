#include <iostream>
using namespace std;

/*
int main()
{
	//This program displays the n first prime numbers, where n is input from the user.
	//A prime number is a number only divisable by 1 and itself. ex: 2,3,5,7,11,13,17,19,....

	//User input & varible declaration/assignment
	cout << "How many prime numbers would you like?: ";
	int currentNumber=2;
	int i=0;
	int n;
	cin >> n;

	cout <<"\n"<< "The first " << n << " prime currentNumber are:" << endl;

	//the while loop checks every number from 2 and up for prime numbers, by dividing the current number by a divisor.
	//At the end of each iteration through the loop, the current number is incremented by 1
	//in the case where a prime number is found, it´s printed, and i is incremented by 1.
	//the loop ends when i = n
	while (i<n)
	{
		bool isPrime=true;
		int divisor = 2;

		//makes the "currentNumber/divisor" division.
		//the loop ends when a composite number is found, or when divisor equals currentNumber
		while (divisor < currentNumber)
		{
			if (currentNumber % divisor == 0)
			{
				//composite number
				isPrime = false;
				break;
			}
			divisor++;
		} 
		
		//if the current number is a prime number, print currentNumber and increment i.
		if (isPrime)
		{
			cout << currentNumber << endl;
			i++;
		}

		//increment currentNumber
		currentNumber++;
	}

	system("pause");
	return 0;
}
*/