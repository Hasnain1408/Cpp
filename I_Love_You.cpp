#include <iostream>
#include <thread>
#include<unistd.h>
//#include <chrono>

using namespace std;

int main() {
    // Clear the screen (system-dependent, may not work on all platforms)
    //cout << "\033[2J\033[H";

    // Set text color to red and background color to white (system-dependent)
   // cout << "\033[31;47m";

    for (int i = 1; i <= 20; ++i) {
        cout << "----- I Love You -----" <<flush<<endl;
        this_thread::sleep_for(chrono::milliseconds(500));
       //usleep(500000);//microseconds
    }

    // Reset text color and background color (system-dependent)
   // cout << "\033[0m";

    // Wait for user input
   //cin.get();

    return 0;
}

