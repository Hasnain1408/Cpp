#include<iostream>
#include<Windows.h>
#include<stdio.h>

using namespace std;

int main()
{
    system("color 0e");
    system("cls");

    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    printf("\e[?251]\n");

    int bar1=177,bar2=219;
    cout<<"\n\n\n\t\t\t\tLoading.....";
    cout<<"\n\n\n\t\t\t\t";

    for(int i=0; i<25;++i)
        cout<<(char)bar1;

    cout<<"\r";
    cout<<"\t\t\t";

    for(int i=0; i<25;++i)
    {
        cout<<(char)bar2;
        Sleep(150);

    }
    cout<<"\n\t\t\t"<<(char)1<<"!";
    system("Pause");

    return 0;
}
