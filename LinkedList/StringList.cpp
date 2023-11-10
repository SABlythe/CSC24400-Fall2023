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

void
StringList::addAfter(const std::string &newVal, StringNode *afterThis )
{
    // build new node with newVal in it
    StringNode *brandNewNode = new StringNode(newVal);

    // update new node's next() to point to node after afterThis
    brandNewNode->next() = afterThis->next();

    // change afterThis's next() to point to my new Node.
    afterThis->next() = brandNewNode;
}

void
StringList::addBefore(const std::string &newVal, StringNode *beforeThis )
{
    if (beforeThis == _head)
        addToFront(newVal);
    else
    {
        // find node before beforeThis (call it prev)
        StringNode *prev = _head;         // start at first node
        while(prev!=nullptr && prev->next() != beforeThis) // node we are looking for?
            prev = prev->next();          // move to next node in list and repeat

        // insert new node after prev.
        addAfter(newVal, prev);
    }
}

void
StringList::removeValue(const std::string &valToRemove)
{
        if (findNode(valToRemove) == nullptr) // can't find the node?
        {
            cerr << "Idiot user message. " << endl;
            return;
        }

        // special case - removing _head
        if (*(_head->pdata()) == valToRemove)
        {
            _head = _head->next();
            return;
        }

        // find node before node to remove (call it prev)
        StringNode *prev = _head;         // start at first node

        // node we are looking for?
        while(prev!=nullptr && *(prev->next()->pdata()) != valToRemove)
            prev = prev->next();          // move to next node in list and repeat

        // "skip over" node to delete
        prev->next() = prev->next()->next();

}


StringNode*
StringList::findNode(const std::string &valToFind) const
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
