#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int value=7;
    int other=16;
    int *myPointer;

    myPointer = &value;

    cout << value << endl;
    cout << *myPointer << endl;

    *myPointer = 34;
    //value =34;
    cout << *myPointer << endl;
    cout << value << endl;
    cout << other << endl;


    return 0;
}
