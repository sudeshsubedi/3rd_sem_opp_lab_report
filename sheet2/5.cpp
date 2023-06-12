// Assume that employee will have to pay 10 percent income tax to the government.
// Ask user to enter the employee salary. Use inline function to display the net
//payment to the employee by the company.
#include <iostream>

inline void net(float salary) {
    std::cout << "Net payment: " << 0.9 * salary << std::endl;
}

int main() {
    float salary;
    std::cout << "Enter your salary: ";
    std::cin >> salary;
    net(salary);
}