#pragma once
#include <string>

class SomeClass {

public:
    explicit SomeClass(std::string name);

    std::string getName() {
        return name_;
    }

private:
    std::string name_;

};