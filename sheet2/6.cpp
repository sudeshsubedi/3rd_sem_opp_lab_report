// Write a program that displays the current monthly salary of chief executive officer,
// information officer, and system analyst, programmer that has been increased by 9, 10, 12,
// and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
// Chief executive officer Rs. 35000/m
// Information officer Rs. 25000/m
// System analyst Rs. 24000/m
// Programmer Rs. 18000/m
// Make a function that takes two arguments; one salary and the other increment.
// Use proper default argument.

#include <iostream>

float new_salary(float old_salary, float inc=12.0);

int main() {
    float ceo = 35000.0, io=25000.0, sysanal=24000.0, prog=18000.0;
    std::cout << "New salary of Chief executive officer: " << new_salary(ceo, 9.0) << '\n';
    std::cout << "New salary of Information officer: " << new_salary(io, 10.0) << '\n';
    std::cout << "New salary of system analyst: " << new_salary(sysanal) << '\n';
    std::cout << "New salary of Programmer: " << new_salary(prog) << '\n';
}

float new_salary(float old_salary, float inc) {
    return old_salary + old_salary * inc * 0.01;
}