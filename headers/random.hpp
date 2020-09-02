#pragma once

#include <string>

class Random{
    
public:
    
    explicit Random(std::string name);
    ~Random();
    
    std::string getName() const;
    
private:

    const std::string name_;

};
