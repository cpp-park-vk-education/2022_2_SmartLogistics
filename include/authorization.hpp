#pragma once
#include"MainWindow.hpp"

class AuthorizationWindow{
    public:
    bool showAuthorizationWindow(bool who){
        if(who){
            MainWindowUser mainwindow;
            return mainwindow.show();
        }else{
            MainWindowCarrier mainwindow;
            return mainwindow.show();
        }    

    }
};