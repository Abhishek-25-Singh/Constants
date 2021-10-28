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
    int a;
    int b;
    std::cout << "Enter Two integer =";
    std::cin >> a >> b;
    const bool flag = a < b;
    std::cout << " flsg = " << flag << std::endl;
    std::cout << " Flag =" << std::setiosflags(std::ios::boolalpha) << flag << std::endl;
    constexpr int max = 8 * 1024;//compile time constant
    std::cout << "Max :" << max << std::endl;
    constexpr int min = 10;
    std::cout << " min : " << min << std::endl;
    constexpr bool flag1 = min < max;
    std::cout << " flag1 :" << flag1 << std::endl;
    //constexpr int min = a * b; // run time constant 
    const int product  = a * b;
    std::cout << "product :" << product << std :: endl;





    //A Constexpr VAriable accepts only compile - time value 

   
}



void constant_use_case1() {
    int age;
    std::cout << "What's your  age (years)" << std::endl;
    std::cin >> age;
    if (age >= 18) {
        std::cout << "you are eligible to vote " << std::endl;
}
    else {
        std::cout << "your are not eligible to vote " << std::endl;
    }

    //Avoid Magic constant use symbolic constants
    constexpr int MIN_AGE_YEAR_FOR_VOTE = 18;
    std::cout << " what's your age (years) ?" << std::endl;
    if (age >= MIN_AGE_YEAR_FOR_VOTE) {
        std::cout << "you are eligible to vote! " << std::endl;

    }
    else {
        std::cout << " you are not eligible to vote"
    }
}


void constant_use_case2() {


}