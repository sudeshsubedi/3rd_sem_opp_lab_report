// Write a program to set a structure to hold a date (mm,dd and yy),
// assign values to the members of the structure and print out the values
// in the format 11/28/2004 by function. Pass the structure to the function

#include <iostream>
#include <iomanip>
struct Date {
  int mm, dd, yy;
};

void print_date(Date &date);

int main() {
  Date d1;
  d1.mm = 6;
  d1.dd = 12;
  d1.yy = 2023;

  print_date(d1);
}

void print_date(Date &date) {
  std::cout << std::setfill('0') << std::setw(2) << date.mm << "/" 
            << std::setfill('0') << std::setw(2) << date.dd << "/"
            << std::setfill('0') << std::setw(2) << date.yy;
}
