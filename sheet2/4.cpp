// Write a function that passes two temperatures by reference and sets the
// larger of the two numbers to a value entered by user by using return by reference

#include <iostream>

float& larger(float& t1, float& t2) {
    return (t1 > t2)? t1 : t2;
}

int main() {
    float t1 = 21.3, t2 = 35.0;
    std::cout << "Enter a temperature: ";
    std::cin >> larger(t1, t2);
    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;
}