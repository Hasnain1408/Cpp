#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>


int main()
{
    system("cls");

    for(int i=0; i<25; ++i)
    {
        for(int j=0; j<80; j++)
            printf(".");
    }

    initwindow(20,5,60,20);
    clrscr();
    return 0;
}
