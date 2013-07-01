#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

class MyClass
{
    public:
        MyClass();
        ~MyClass();
        std::string Hello();
    private:
        std::string _message;
};

#endif
