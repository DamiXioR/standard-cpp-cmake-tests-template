#pragma once

#include <cstddef>
#include <string>

class AnotherRandom {

public:
    AnotherRandom(std::string name, size_t age);
    ~AnotherRandom();

    std::string getName() const {
        return this->name_;
    }

    size_t getAge() const {
        return this->age_;
    }

private:
    const std::string name_{};
    const size_t age_{};

};
