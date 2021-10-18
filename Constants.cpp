// Constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <thread>
#include <chrono>
#include <iomanip>
void constant_basics();
void constant_use_case1();
void constant_use_case2();


int main()
{
    constant_basics();

    constant_use_case1();
    constant_use_case2();
    std::this_thread::sleep_for(std::chrono::seconds());
}


void constant_basics() {
    const int ci1 = 2;
    std::cout << " ci1 = " << ci1 << std::endl;
    //ci1 = 33;   //Error
    //const int ci3 ;  //Error: no value 
    // ci3 = 55;
    const float pi = 3.14159;
    std::cout << " pi =" << pi << std::endl;
    const char cc = 'a';
    std::cout << " cc = " << cc << std::endl;
    const bool cmp = ci1 < pi;
    std::cout << " cmp = " << cmp << std::endl;
    std::cout << "cmp ="<< std::setiosflags(std::ios::boolalpha) << cmp << std::endl;
    


    //A Constexpr VAriable accepts only compile - time value 

   
}



void constant_use_case1() {


}


void constant_use_case2() {


}