#pragma once // NOLINT

#define SUCCESS_FLG 0

#include <iostream>

namespace project {

  struct Server {
    Server() {std::cout << "Create server" << std::endl;} 
    static int run();
    ~Server() {std::cout << "Delete server" << std::endl;}
  };

}  // namespace project