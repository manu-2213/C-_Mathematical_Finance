#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int a = 0xFF; // 255 written in hexadecimal (base 16), 08 does not compile
    int mark;
    cout << "What is your average grade?\n";
    // cin >> mark;

    if (mark >= 70) {
        cout << a << endl;
    }

    else if (mark >= 60) {
        cout << "You got a B!\n";
    }

    else if (mark >= 50) {
        cout << "You passed\n";
    }

    else {
        cout << "You failed\n";
    }



    // statically typed language -> Dtypes cannot be changed

    /* integer operations result in integer rounded down results. Types:
        short
        int −2^31 and 2^31 −1
        long
        long␣long  −2^63 and 2^63 −1
        unsigned␣short
        unsigned␣int
        unsigned␣long
        unsigned␣long␣long
        size_t    store the size of data structures stored in memory, 32 bits long for 32-bit computers and 64
        bits long for 64-bit computers
        unsigned = non-negative (frees one bit of memory, unsigned can be twice as long?)
     */

    // In memory a charis stored as a number between 0 and 255, or, in hexadec-
    // imal, between 00 and FF (Takes up exactly one byte). Inappropiate for international programs

    //casting: convert between one data type to another. Easy from int to double, reverse not so much.

    int anInt = 123;
    double aDouble = anInt;
    cout << aDouble;
    cout << "\n";

    // Double to in rounding down (to float would be risky)

    double f = 3.141;
    int b = (int)f;
    cout << b << endl;

    // Bool: True = 1 and False = 0

    int pi = 3.1415; // technically acceptable
    cout << pi << endl;

    // Manual Casting: Wrong example

    int a1 = 3;
    int a2 = 4;
    double result = a1 / a2;
    cout << result << endl;

    // Right way to do it

    int b1 = 3;
    int b2 = 4;
    double resultb = ((double) a1) / a2; // C++ is weird sometimes
    cout << resultb << endl;

    // These examples so far are a Cstyle cast, the C++ style cast is

    double car = 3.141;
    int carRounded = static_cast<int>(car);
    cout << carRounded << endl;

    // using strings now

    string speech = "TB or not TB?"; // std::string

    // sizeof operator

    size_t charSize = sizeof(float);
    cout << "A char takes up " << charSize << " byte\n";

    // cmath library http://www.cplusplus.com/reference/cmath/


    double y = sin(23) + cos(1.234);
    int g = pow(2, 8); // 2^8

    // Bools && || ! (an or and not). Bitwise operators & | ^ ~ << >>

    // TO DO: Come back to Exercises Chapter2

    return 0;
}