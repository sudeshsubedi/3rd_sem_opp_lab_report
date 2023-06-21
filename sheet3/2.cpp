// Assume that you want to check whether the number is prime or not. 
// Write a program that asks for numbers repeatedly. When it finishes checking 
// a number the program asks if the user wants to do another calculation. The 
// response can be 'y' or 'n'. Don't forget to use the object-oriented concept.

#include <iostream>
#include <cmath>

class Prime
{
private:
    int num;
public:
    void getNum()
    {
        std::cout << "Enter a number: ";
        std::cin >> num;
    }
    void checkPrime()
    {
        int i;
        bool isPrime = true;
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            std::cout << num << " is a prime number." << std::endl;
        else
            std::cout << num << " is not a prime number." << std::endl;
    }
};

int main()
{
    Prime p;
    char choice;
    do
    {
        p.getNum();
        p.checkPrime();
        std::cout << "Do you want to check another number? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y');
    return 0;
}