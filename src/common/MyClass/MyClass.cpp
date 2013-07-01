#include "MyClass.h"

MyClass::MyClass()
{
    _message = "Hello World!";
}

MyClass::~MyClass()
{
}

std::string MyClass::Hello()
{
    return _message;
}
