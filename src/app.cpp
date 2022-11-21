#include<iostream>
#include "../include/authorization.hpp"

int main(){
  AuthorizationWindow window;
  window.showAuthorizationWindow(true);
  window.showAuthorizationWindow(false);
  return 0;
}
