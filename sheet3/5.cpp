// Assume that an object represents an employee report that contains information
//like employee id, total bonus, total overtime in a particular year. Use an array
//of objects to represent n employees' reports. Write a program that displays the
//report. Use setpara() member function to set report attributes by passing the
// arguments and member function displayreport() to show the report according to
// the parameter passed. Display the report in the following format.
// An employee with ... ... ... has received Rs ... ... ...as a bonus
// and
// had worked ... ... ... hours as overtime in the year ... ... ...

#include <iostream>
#include <string>

class Employee
{
private:
    int id;
    float bonus, overtime;
public:
    void setPara(int id, float bonus, float overtime)
    {
        this->id = id;
        this->bonus = bonus;
        this->overtime = overtime;
    }
    void displayReport()
    {
        std::cout << "An employee with id " << id << " has received Rs "
                  << bonus << " as a bonus and had worked " << overtime
                  << " hours as overtime." << std::endl;
    }
};


int main()
{
    int n, id;
    float bonus, overtime;
    std::cout << "Enter the number of employees: ";
    std::cin >> n;
    Employee e[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter the id, bonus, and overtime of employee " << i + 1
                  << ": ";
        std::cin >> id >> bonus >> overtime;
        e[i].setPara(id, bonus, overtime);
    }
    for (int i = 0; i < n; i++)
    {
        e[i].displayReport();
    }
    return 0;
}