#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int before = -999;
    int arr[10];
    int after = 999;

    for (int i=0; i<14; i++)
    {
        arr[i]=100;
    }

    cout << "before (should be -999) = " << before << endl;
    for (int i=0; i<10; i++)
    {
        cout << "arr [" << i << "] (should be 100) = " << arr[i] <<endl;
    }
    cout << "after (should be 999) = " << after << endl;

    return 0;
}
