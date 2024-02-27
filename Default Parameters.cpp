#include<iostream>
#include<string>
using namespace std;


void showCountryName(string name = "Bangladesh")
{
    cout<<name<<endl;
}

int main()
{
    showCountryName();
    showCountryName("Pakistan");
    showCountryName("Saudi Arab");

    return 0;
}

