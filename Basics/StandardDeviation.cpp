#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter name of input file: ";
	string fileName;
	cin >> fileName;

	ifstream dataReader(fileName);
	if (!dataReader)
		cout << "Uh oh, " << fileName << " could not be opened!"
			<< endl;
	else
		cout << "File opened successfully!" << endl;

	double values[10000];
	int count = 0;

	dataReader >> values[0];

	while (dataReader)
	{
		//cout << nextValue<<endl;
		count++;

		dataReader >> values[count];
	}

	double sum=0;
	for (int index = 0; index < count; index++)
	{
		sum += values[index];
	}

	cout << "sum of all values in input file is "
		<< sum << endl;

	double average = sum / count;

	sum = 0;
	for (int index = 0; index < count; index++)
	{
		double term = values[index] - average;
		sum += term * term;
	}

	cout << "sum of sqaured errors is " << sum << endl;

	double stddev = sqrt(sum / (count - 1));

	cout << "Standard deviation is " << stddev << endl;
	
	return 0;
}