#include<stdio.h>

int N = 10;

int main()
{
    static int x = 1;
    if(printf("%d ",x) && x++<N && main())
    {}
    return 0;
}