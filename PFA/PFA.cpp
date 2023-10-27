#include "PFA.hpp"

using namespace std;

/*
    std::string *_array; // actual array contents
    int _size;           // max number of elements possible
    int _filled;         // current number of elements
*/

int
PFA::findIndex(const std::string &str) const
{
    for (int searchIndex=0; searchIndex<_filled; searchIndex++)
    {
        if (_array[searchIndex] == str)
        {
            return searchIndex;
        }
    }
    return -1; // impossible index, indicating str not found!
}


void
PFA::addElement(const std::string &whatToAdd)
{
    if (_filled>=_size)
    {
        int oldSize=_size;
        _size = _size*2;                // need twice the size
        string *backupArray = _array;   // make a backup ptr to "old" array
        _array = new string[_size];     // allocate a new array

        // copy old items into new array
        for (int index=0; index<oldSize; index++)
        {
            _array[index] = backupArray[index];
        }

        // clean up the unused array by returning memory to C++
        //    intentionally left commented out here ...
        // delete [] backupArray;
    }

    // add the new element to array at next available slot
    _array[_filled]=whatToAdd;
    _filled++;
}

void
PFA::removeElement(const std::string &whatToRemove)
{
    int foundAt = findIndex(whatToRemove);

    if (foundAt==-1) // not found!
    {
        cerr << " Could not find \"" << whatToRemove << "\" when trying to remove!" << endl;
        return;
    }

    _array[foundAt]=_array[_filled-1];

    _filled--;
}

std::ostream&
PFA::print(std::ostream &os) const
{
    os <<"Your strings are:" << endl;

    for(int index=0; index < _filled; index++)
        os << _array[index] << endl;

    return os;
}
















