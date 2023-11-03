#ifndef _STRING_NODE_HPP_
#define _STRING_NODE_HPP_

#include <iostream>
#include <string>

class StringNode
{
private:
    std::string *_data;
    StringNode *_next;
public:
    StringNode() : _data(nullptr), _next(nullptr) {}
    StringNode(const std::string &dataVal)
        : _data( new std::string(dataVal)), _next(nullptr) {}

    // Accessors
    std::string* pdata() const {return _data;}
    // const std::string& data() const {return *_data;}
    StringNode* next() const {return _next;}

    // Modifiers
    std::string* & pdata() {return _data;}
    StringNode* & next() {return _next;}

    std::ostream& print(std::ostream &os) const;
};

std::ostream& operator<<(std::ostream &os, const StringNode &sn);

#endif


