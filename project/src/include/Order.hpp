#include <iostream>

namespace project{
    struct Order{
        std::string id;
        std::string user_id;
        std::string carrier_id;
        std::string place_from;
        std::string place_to;
        std::string size_of_cargo;
        std::string type_of_vehivle;
        std::string status;
    };
}