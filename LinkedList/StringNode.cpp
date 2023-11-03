#include "StringNode.hpp"

std::ostream&
StringNode::print(std::ostream &os) const
{
    if (_data!=nullptr)
        os << *_data;
    else
        os << "<<NO DATA>>";
    return os;
}

std::ostream& operator<<(std::ostream &os, const StringNode &sn)
{
    return sn.print(os);
}
