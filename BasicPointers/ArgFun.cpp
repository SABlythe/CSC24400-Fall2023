#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    for (int index=0; index < argc; index++)
    {
        cout << "argv[" << index << "] = " << argv[index] << endl;
    }

    return 0;
}
