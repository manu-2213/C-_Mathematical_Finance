//
// Created by Manuel Teres on 20/01/2025.
//
#include <iostream>
#include <cmath>
#include <string>
#include <stdexcept>

void launchRocket();
void printPowersOf2();
void launchRocket_DoWhileVersion();
void rocketLauncherForLoop();
void stopWhenNegative();
void breakcontinue();
double debitAccount(double balance, double amount);
void printMessage(int score);

// Short circuit evaluation

// lhs && rhs returns true iff lhs == rhs == true

// Ternary operator: <test expression> ? <value if true> : <value if false>

int max(int a, int b) {
    return a > b ? a : b;
}

// Coma operator

void commaFunction () {
    for (int count = 0, power = 1;
        count < 10;
        count ++, power *= 2) {
        std::cout << power << "\n";
    }
}





int main () {

    void breakcontinue();
    return 0;
}

void launchRocket() {
    int count = 10;
    while (count > 0) {
        std::cout << count;
        std::cout << "\n";
        count--;
    }
    std::cout << "Blast off!";
}

void printPowersOf2() {
    int count = 0;
    int currentPower = 1;
    while (currentPower < 1049000) {
        std::cout << "2^" << count << "=" << currentPower << std::endl;
        currentPower *= 2;
        count ++;
    }
}

void launchRocket_DoWhileVersion() {
    int count = 10;
    do {
        std::cout << count;
        std::cout << "\n";
        count--;
    } while (count >= 1);
    std::cout << "Blast off!";
}

void rocketLauncherForLoop() {
    for (int i = 10; i > 0; i--) {
        std::cout << i << std::endl;
    }
    std::cout << "Blast off!";
}

void stopWhenNegative() {
    std::cout << "Enter a negative number to quit \n";
    int total = 0;
    while (true) {
        int next;
        std::cin >> next;
        if (next < 0) {
            break; // could replace with return; and would have the same functionality
        }
        total += next;
    }
    std::cout << "The total is: " << total << "\n";
}

void breakcontinue() {
    std::cout << "Enter positive numbers ";
    std::cout << "Type CTRL+C to quit\n";
    int total = 0;
    while (true) {
        int next;
        std::cin >> next;

        if (next < 0) {
            continue;
        }

        total += next;
        std::cout << "Total is: " << total << std::endl;
    }
}

// throw statements. Look into  try / cath and more than logic_error
double debitAccount(double balance, double amount) {
    double newAmount = balance - amount;
    if (newAmount < 0.0) {
        throw std::logic_error("No overdraft agreed");
    }
    return newAmount;
}

void printMessage(int score) {
    switch (score) {

        case 0: case 1: case 2: case 3: case 4:
            std::cout << "You have failed! \n";
        break;
        case 5: case 6: case 7: case 8: case 9:
            std::cout << "You have passed. \n";
        break;
        case 10:
            std::cout << "You got a perfect grade. \n";
        break;
        default:
            std::cout << "Invalid mark \n";
        break;
    }
    std::cout << "End of switch \n";



}






