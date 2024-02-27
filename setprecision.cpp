#include <iomanip>
#include <iostream>

int main()
{
    double num1 = 3.12345678;
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(6);
    std::cout << num1 << std::endl;

  return 0;
}
