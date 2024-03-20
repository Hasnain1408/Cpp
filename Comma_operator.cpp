#include <stdio.h>

int main() {
    int a = 5, b = 6, c;
    c = (a++, ++b, a + b); // The comma operator evaluates expressions from left to right and returns the value of the rightmost expression
    printf("%d\n", c); // Output will be 13
    return 0;
}
