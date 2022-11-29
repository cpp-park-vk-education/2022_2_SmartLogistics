#include <iostream>

namespace project{
    class Parser{
        std::string Parse(size_t message){
            return std::to_string(message);
        }
    };
}