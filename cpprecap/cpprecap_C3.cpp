//
// Created by Manuel Teres on 18/01/2025.
//
#include <iostream>
#include <cmath>
#include <string>

// Compound interest formula (can declare and define after main)

// Two functions can have the same names as long as they have a different number of arguments or/and types.
// The signature of a function is defined by its name and types of its parameters. If the types are wrong the compiler
// will cast. Global variables are defined outside functions. Local, inside. (Global and local scope {})

// Create a namespace

double compoundInterest (double P, double r = 2, int n = 1) { // default values always declared last
    double interest = P * pow(1 + 0.01 * r, n) - P;
    return interest;
}

double kineticEnergy (double m, double v) {
    double energy = 0.5 * m * pow(v, 2);
    return energy;
}

// Recursion: computing n!

int factorial (int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

// void to avoid returning

void printHi() {
    std::cout << "Hi\n";
}

int main () {

    // Compound Interest
    double principal = 200;
    double interest = 5;
    int periods = 5;

    double interestEarned = compoundInterest(principal,
        interest,
        periods);

    std::cout << "Your net profit is: " << interestEarned << std::endl;

    // Kinetic Energy
    double mass = 50;
    double velocity = 20;
    double kinetic = kineticEnergy(mass,
        velocity);
    std::cout << "Your total kinetic energy is: " << kinetic << std::endl;

    return 0;
}