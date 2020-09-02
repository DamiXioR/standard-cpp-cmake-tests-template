#include "random.hpp"

Random::Random(std::string name) : name_(name) {}
Random::~Random() {}

std::string Random::getName() const{
    return name_;
}
