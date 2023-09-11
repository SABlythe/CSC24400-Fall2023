#include <iostream>

using namespace std;

long long  int factorial(int value)
{
	long long int answer = 1;

	for (int multiples = 2; multiples <= value; multiples++)
		answer = answer * multiples;

	return answer;
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