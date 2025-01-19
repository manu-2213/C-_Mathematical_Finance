//
// Created by Manuel Teres on 18/01/2025.
// This file contains the exercises from the book in void functions :)
//

#include<iostream>
#include<cmath>
#include<string>

void exercise1_7_1 () {

    // 1.7.1
    double revenue;
    double cost;
    double taxRate;


    std::cout << "What is the revenue for this year? ";
    std::cin >> revenue;
    std::cout << "\nWhat are the costs? ";
    std::cin >> cost;
    std::cout << "\nWhat is the tax rate for this year? (0 - 100) ";
    std::cin >> taxRate;

    double profit = revenue - cost;
    double netProfit = profit * (1 - 0.01 * taxRate);

    std::cout << "\nYour profit is: " << profit << "\nYour net profit is: " << netProfit;

}

void exercise2_5_1 () {
    std::cout << (true || false) << std::endl;
    std::cout << ((true && false) || true) << std::endl;
    std::cout << (true && (false || true)) << std::endl;
    std::cout << ((true && false) || true) << std::endl;
    std::cout << ((3 * 5 == 15) && ((7 * 8 == 21) || (true != false))) << std::endl;
}


int main() {

    std::cout << "Hello";


    return 0;
}