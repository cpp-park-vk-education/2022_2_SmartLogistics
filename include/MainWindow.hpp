#pragma once
#include<iostream>

class MainWindowUser{
    public:
    bool show(){
        std::cout<<"SHOW_User_SUCCESS";
        return true;
    }
};

class MainWindowCarrier{
    public:
    bool show(){
        std::cout<<"SHOW_Carrier_SUCCESS";
        return true;
    }
};