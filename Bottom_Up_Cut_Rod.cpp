#include<iostream>

using namespace std;

int Bottom_Up_Cut_Rod(int p[],int n)
{
    int r[n];
    r[0]=0;
    int i,j,q;

    for(i=1; i<=n; i++)
    {
       q=-1;
       for(j=1; j<=i; ++j)
       {
           q=max(q,p[j]+r[i-j]);
       }
       r[i]=q;
    }

    return r[n];
}

int main()
{
    int n,i;
    int p[11] = {0,1,5,8,9,10,17,17,20,24,30};

//    freopen("Bottom_UP_Cut_Rod.txt","r",stdin);
//    for(i=0; i<11; i++)
//        cin>>p[i];


    cin>>n;
    cout<<Bottom_Up_Cut_Rod(p,n)<<endl;
    return 0;
}
