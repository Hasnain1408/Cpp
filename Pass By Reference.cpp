
#include<string>
#include<iostream>
using namespace std;

void swapNums(int &x, int &y) {

    cout << "___Call by Value !!___" << "\n";

  int z = x;
  x = y;
  y = z;
}

void swapNums(int *x, int *y) {

        cout << "---Call by Reference !!---" << "\n";


  int z = *x;
  *x = *y;
  *y = z;
}
int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum



  cout << "After swap: " << "\n";
  swapNums(firstNum, secondNum);
  cout << firstNum << secondNum << "\n";




  cout << "After 2nd swap: " << "\n";
  swapNums(&firstNum, &secondNum);
  cout << firstNum << secondNum << "\n";

  return 0;
}

