#include<stdio.h>

void func() {
    static int count = 0;
    count++;
    printf("Count: %d\n", count);
}

int main() {
    func();  // Output: Count: 1
    func();  // Output: Count: 2
    func();  // Output: Count: 3
    return 0;
}
