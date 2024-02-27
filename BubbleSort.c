#include<stdio.h>

struct student{
        int roll;
        char name[20];
        double mark;
}bsse[5];

#define n 5

int main()
{
    double arr[5];
    // taking input
    for(int i=0; i<5; i++)
    {
        scanf("%d ",&bsse[i].roll);
        gets(bsse[i].name);
        scanf("%lf ",&bsse[i].mark);
        arr[i]=bsse[i].mark;
    }

    //sort arr[]

    for(int i=0; i<5; i++)
    {
        for(int j=i; j<n-1-i; j++)
        {
            if(arr[j+1] > arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }






    return 0;
}
