#include <iostream>

using namespace std;

long long  int factorial(int value)
{
	if (value <= 1) return 1;
	return value * factorial(value -1);
}

int main(int argc, char* argv[])
{
	int num;
	cout << "Number to take factorial of: ";
	cin >> num;

	long long int fact = factorial(num);
	cout << num << "! = " << fact << endl;

	return 0;
}