// Write a program using the function overloading that converts feet to inches.
// Use function with no argument, one argument and two arguments. Decide yourself
// the types of arguments. Use pass by reference in any one of the function above.

#include<iostream>

int feet2in() {
    return 12;
}

int feet2in(int ft) {
    return 12 * ft;
}

void feet2in(int &ft, int &in) {
    in = ft * 12;
}

int main() {
    int f2 = 6, f3 = 21;
    int i1, i2, i3;

    i1 = feet2in();
    i2 = feet2in(f2);
    feet2in(f3, i3);

    std::cout << "1 feet =  " << i1 << " inches." << std::endl;
    std::cout << f2 << " feet = " << i2 << " inches." << std::endl;
    std::cout << f3 << " feet = " << i3 << " inches." << std::endl;
}