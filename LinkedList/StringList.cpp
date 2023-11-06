#include "StringList.hpp"
#include "StringNode.hpp"

using namespace std;

void
StringList::addToFront(const std::string &newVal)
{
    StringNode *nodePtr = new StringNode(newVal);
    nodePtr->next() = _head;
    _head = nodePtr;
}

std::ostream&
StringList::print(std::ostream &os) const
{
    StringNode *nodePtr = _head;
    while (nodePtr != nullptr)
    {
        cout << * (nodePtr->pdata())  << endl;
        nodePtr = nodePtr->next();
    }
    return os;
}
