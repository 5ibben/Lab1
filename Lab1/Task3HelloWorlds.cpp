#include <iostream>
using namespace std;

int helloWorld_ForLoop(int n);
int helloWorld_WhileLoop(int n);
int helloWorld_DoWhileLoop(int n);

/*
int main()
{
	cout << "Hello World!" << endl;

	int n;
	cout << "enter a positive integer, for the for loop!" << endl;
	cin >> n;
	helloWorld_ForLoop(n);
	cout << "enter a positive integer,for the while loop!" << endl;
	cin >> n;
	helloWorld_WhileLoop(n);
	cout << "enter a positive integer, for the do while loop!" << endl;
	cin >> n;
	helloWorld_DoWhileLoop(n);

	system("pause");
	return 0;
}
*/

int helloWorld_ForLoop(int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << "Hello World!" << endl;
	}
	return 0;
}

int helloWorld_WhileLoop(int n)
{
	int i = 0;
	while (i<n)
	{
		cout << "Hello World!" << endl;
		i++;
	}
	return 0;
}

int helloWorld_DoWhileLoop(int n)
{
	int i = 0;
	do
	{
		cout << "Hello World!" << endl;
		i++;
	} 
	while (i<n);
	
	return 0;
}