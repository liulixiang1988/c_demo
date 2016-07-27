//
// Created by 刘理想 on 16/7/26.
//
#include <iostream>
#include <stdlib.h>

int main(void) {
    std::cout<<"请输入一个整数:"<<std::endl;
    int x = 0;
    std::cin >> x;
    std::cout<<std::oct<<x<<std::endl; //8进制
    std::cout<<std::dec<<x<<std::endl; //10进制
    std::cout<<std::hex<<x<<std::endl; //16进制

    std::cout<<"请如数一个布尔值(0, 1):"<<std::endl;
    bool y = false;
    std::cin >> y;
    std::cout << std::boolalpha << y <<std::endl;
    return 0;
}