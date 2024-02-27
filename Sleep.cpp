#include<iostream>
#include<unistd.h>


using namespace std;

int main()
{
    for(int m=0; m<10; ++m)
     {
        cout<<"Hi\t";
        sleep(2);
     }
    cout<<"Before\n";
    sleep(1);//second

//    usleep(500000);//microsecond
    cout<<"After\n";

    return 0;
}
