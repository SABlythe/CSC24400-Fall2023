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

void
StringList::addToRear(const std::string &newVal)
{
    // special case: empty StringList
    if (_head==nullptr)
    {
        addToFront(newVal);
    }

    // find the last node
    StringNode *last = _head;
    while(last->next() != nullptr)
        last = last -> next();

    last->next() = new StringNode(newVal);
}


StringNode*
StringList::findNode(std::string &valToFind) const
{
    StringNode *nodePtr = _head;
    while (nodePtr != nullptr)
    {
        if ( *(nodePtr->pdata()) == valToFind )
            return nodePtr;

        nodePtr = nodePtr->next();
    }

    return nullptr;
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
