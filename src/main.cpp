#include <cstdio>
#include <iostream>
#include <string>

#include "project/common/MyClass/MyClass.h"

int main() {
    MyClass x;
    std::string mystring = x.Hello();
    std::cout << mystring << std::endl;
}
