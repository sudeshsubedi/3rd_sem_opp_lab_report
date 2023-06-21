// Write a simple program that converts the temperature in Celsius scale to
// Fahrenheit scale and vice versa using the basic concept of class and object.
// Make separate classes for Celsius and Fahrenheit which will have the private
// members that hold the temperature value and make conversion functions in each
// class for conversion from one to another. For example, you need to have a
// function toFahrenheit() in class Celsius that converts to Fahrenheit scale
// and returns the value.

#include <iostream>

class Celsius {
private:
  float temp;

public:
  float getTemp() { return temp; }
  void setTemp(float temp) { this->temp = temp; }
  float toFahrenheit() { return temp * 1.8 + 32; }
};

class Fahrenheit {
private:
  float temp;

public:
  float getTemp() { return temp; }
  void setTemp(float temp) { this->temp = temp; }
  float toCelcius() { return (temp - 32) * 0.55555; }
};

int main() {
  Celsius c;
  Fahrenheit f;
  float temp;
  std::cout << "Enter a temperature in celsius: ";
  std::cin >> temp;
  c.setTemp(temp);
  std::cout << "Given temperature in fahrenheit: " << c.toFahrenheit()
            << std::endl;

  std::cout << "Enter a temperature in fahrenheit: ";
  std::cin >> temp;
  f.setTemp(temp);
  std::cout << "Given temperature in fahrenheit: " << f.toCelcius()
            << std::endl;
}
