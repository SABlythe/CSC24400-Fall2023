#ifndef _STRING_LIST_HPP_
#define _STRING_LIST_HPP_

#include "StringNode.hpp"

#include <iostream>
#include <string>

class StringList
{
private:
    StringNode *_head;
public:
    StringList() : _head(nullptr) {}

    const StringNode* head() const {return _head;}
    StringNode* &head() {return _head;}

    void addToFront(const std::string &newVal);
    void addToRear(const std::string &newVal);

    void addAfter(const std::string &newVal, StringNode *afterThis );
    void addBefore(const std::string &newVal, StringNode *beforeThis );

    void removeValue(const std::string &valToRemove);

    StringNode* findNode(const std::string &valToFind) const;


    std::ostream& print(std::ostream &os) const;
};


#endif
