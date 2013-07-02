#ifndef SRC_COMMON_MYCLASS_MYCLASS_H_
#define SRC_COMMON_MYCLASS_MYCLASS_H_

#include <string>

class MyClass {
    public:
        MyClass();
        ~MyClass();
        std::string Hello();
    private:
        std::string _message;
};

#endif  // SRC_COMMON_MYCLASS_MYCLASS_H_
