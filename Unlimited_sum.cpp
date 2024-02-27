#include<iostream>

using namespace std;

int main()
{
    cout<<"Enter numbers to Sum : " <<endl;
    int val,sum=0;

    while(cin>> val)
        sum+=val;

    cout<<"Sum = "<<sum<<endl;

    return 0;
}
