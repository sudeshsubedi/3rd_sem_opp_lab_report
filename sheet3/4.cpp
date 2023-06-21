// Write a program with classes to represent a circle, rectangle,
// and triangle. Each class should have data members to represent
// the actual objects and member functions to read and display objects,
// find perimeter and area of the objects, and other useful functions.
// Use the classes to create objects in your program.

#include <iostream>
#include <cmath>

class Circle
{
private:
    float radius;
public:
    void getRadius()
    {
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
    }
    void displayRadius()
    {
        std::cout << "Radius: " << radius << std::endl;
    }
    void findArea()
    {
        std::cout << "Area: " << M_PI * radius * radius << std::endl;
    }
    void findPerimeter()
    {
        std::cout << "Perimeter: " << 2 * M_PI * radius << std::endl;
    }
};

class Rectangle
{
private:
    float length, breadth; 
public:
    void getDimensions()
    {
        std::cout << "Enter the length and breadth of the rectangle: ";
        std::cin >> length >> breadth;
    }
    void displayDimensions()
    {
        std::cout << "Length: " << length << std::endl;
        std::cout << "Breadth: " << breadth << std::endl;
    }
    void findArea()
    {
        std::cout << "Area: " << length * breadth << std::endl;
    }
    void findPerimeter()
    {
        std::cout << "Perimeter: " << 2 * (length + breadth) << std::endl;
    }
};

class Triangle
{
private:
    float a, b, c;
public: 
    void getDimensions()
    {
        std::cout << "Enter the three sides of the triangle: ";
        std::cin >> a >> b >> c;
    }
    void displayDimensions()
    {
        std::cout << "Side 1: " << a << std::endl;
        std::cout << "Side 2: " << b << std::endl;
        std::cout << "Side 3: " << c << std::endl;
    }
    void findArea()
    {
        float s = (a + b + c) / 2;
        std::cout << "Area: " << sqrt(s * (s - a) * (s - b) * (s - c)) << std::endl;
    }
    void findPerimeter()
    {
        std::cout << "Perimeter: " << a + b + c << std::endl;
    }
};


int main()
{
    Circle c;
    Rectangle r;
    Triangle t;
    int choice;
    do
    {
        std::cout << "1. Circle\n2. Rectangle\n3. Triangle\n4. Exit\nEnter your choice: ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            c.getRadius();
            c.displayRadius();
            c.findArea();
            c.findPerimeter();
            break;
        case 2:
            r.getDimensions();
            r.displayDimensions();
            r.findArea();
            r.findPerimeter();
            break;
        case 3:
            t.getDimensions();
            t.displayDimensions();
            t.findArea();
            t.findPerimeter();
            break;
        case 4:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
        }
    } while (choice != 4);
    return 0;
}