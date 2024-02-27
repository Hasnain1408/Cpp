 #include<iostream>

using namespace std;

int Memoized_Cut_Rod_Aux(int p[],int n,int r[])
{
    int j,q;
    if(r[n] >= 0) return r[n];

    if(n == 0 ) return 0;

    q=-1;

    for(j=1; j<=n; ++j)
    {
        q=max(q,p[j]+Memoized_Cut_Rod_Aux(p,n-j,r));
    }

    r[n]=q;

    return q;
}

int Memoized_Cut_Rod(int p[],int n)
{
    int r[n+1],i;
    for(i=0; i<=n; i++) r[i]=-1;

    return Memoized_Cut_Rod_Aux(p,n,r);
}



int main()
{
    int p[] = {0,1,5,8,9,10,17,17,20,24,30};
    int n;

    cin>>n;
    cout<<Memoized_Cut_Rod(p,n)<<endl;
    return 0;
}

