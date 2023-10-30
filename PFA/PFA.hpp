#ifndef _PFA_HPP_
#define _PFA_HPP_

#include <iostream>
#include <string>

#define DEFAULT_SIZE 10

class PFA{
private:
    std::string *_array; // actual array contents
    int _size;           // max number of elements possible
    int _filled;         // current number of elements
public:
    PFA(): _array(new std::string[DEFAULT_SIZE]), _size(DEFAULT_SIZE), _filled(0){}

    int findIndex(const std::string &str) const;

    void addElement(const std::string &whatToAdd);
    void removeElement(const std::string &whatToRemove);

    std::ostream& print(std::ostream &os) const;
};

std::ostream& operator<<(std::ostream &os, const PFA &p);

#endif












