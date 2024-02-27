#include<stdio.h>

void merge(int arr[],int l, int m,int r)
{
    int n1,n2;
    n1=m-l+1;
    n2=r-m;

    int L[n1],R[n2];
    int i,j,k;

    for(i=0; i<n1; i++)
        L[i]=arr[l+i];
    for(j=0; j<n2; j++)
        R[j]=arr[m+1+j];

    i=0;
    j=0;
    k=0;

    while(i < n1 && j < n2)
    {
        if(L[i] < R[j])
            arr[k++]=L[i++];
        else
            arr[k++]=R[j++];
    }

    while( i < n1 )
        arr[k++]=L[i++];
    while( j < n2 )
        arr[k++]=R[j++];

}

void mergeSort(int arr[],int l,int r)
{
    if( l >= r )
        return;

    int mid;
    mid=l+(r-l)/2;

    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

void printArray(int arr[],int l, int r)
{
    int i=0;
    while( i < 9 )
    {
         printf("%d ",arr[i]);
         i++;
    }

}
int main(void)
{
    int n;
    int arr[10]={90,80,70,60,50,40,30,20,10,2};

    mergeSort(arr,0,9);

    printArray(arr,0,9);

return 0;
}
