#include <iostream>
#include <cstdio>
#include <common/MyClass/MyClass.h>

int main(int argc, char* argv[])
{
    MyClass x;
    std::string mystring = x.Hello();
    std::cout << mystring << std::endl;
}

