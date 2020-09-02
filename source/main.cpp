#include "random.hpp"
#include "anotherRandom.hpp"
#include "someClass.hpp"

#include <iterator>
#include <iostream>


int main(){

    std::ostream_iterator<std::string> text(std::cout, "!\n");
    std::fill_n(text, 1, "Hello World");

return 0;

}
