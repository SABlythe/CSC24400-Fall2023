#ifndef _PFA_HPP_
#define _PFA_HPP_

#include <iostream>
#include <string>

class PFA{
private:
    std::string *_array; // actual array contents
    int _size;           // max number of elements possible
    int _filled;         // current number of elements
public:
    PFA();
    void addElement(const std::string &whatToAdd);
    void removeElement(const std::string &whatToRemove);

    std::ostream& print(std::ostream &os) const;
};

#endif
