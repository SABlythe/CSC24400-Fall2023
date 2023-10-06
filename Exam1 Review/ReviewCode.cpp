
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

void getFileName(string &intoThisString)
{
	cout << "Enter a filename: ";
	cin >> intoThisString;
	cout << "in function, name is " << intoThisString << endl;
}

void otherCall()
{
	string str;
	getFileName(str);
	cout << "str is " << str << endl;
}
int main(int argc, char* argv[])
{
	string myName="question";
	getFileName(myName);

	cout << "you gave: '" << myName << '\'' << endl;
	//getFileName(myName);

	//otherCall();

	ofstream outStream(myName);

	cout << "hello" << endl;
	outStream << "goodbye" << endl;

	int someArray[200];
	for (int index = 0; index < 200; index++)
	{
		someArray[index] = rand() ;
	}

	for (int index = 0; index < 200; index++)
	{
		cout << someArray[index] << ", ";
	}

	return 0;
}