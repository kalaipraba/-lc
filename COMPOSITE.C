#include <iostream>
void  main()
{
	int number;
	cout << "Please enter an integer number: ";
	cin >> number;
	if (number == 0 || number == 1) 
		cout << "The number is neither prime nor composite.";
	else
	{
		if (number % 2 != 0)
			cout << "The Number is prime number.";
		else
			cout << "The number is composite.";
	}
	getch();
}
