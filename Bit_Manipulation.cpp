#include<iostream>

using namespace std;

void countSetBits(int x)
{
    cout<<"Number of Set Bits in "<<x;
    int c=0;
    while(x)
    {
        if(x&1) c++;
        x=x>>1;
    }
    cout<<" : "<<c<<endl;
}

void MultiByBitOperation(int x,int m)
{
    cout<<x<<"*"<<m<<"=";
  //  m--;
  //  x=x<<m;

    while(m)
    {
        m/=2;
        x=x<<1;
    }
    cout<<x;
}

void DivideByBitOperation(int x,int m)
{
    cout<<x<<"*"<<m<<"=";
    m--;
    x=x<<m;

    while(m--)
    {
        x=x>>1;
    }
    cout<<x;
}

void isPowerOfTwo(int x)
{
    cout<<"isPowerOfTwo : "<<endl;
    (x && !(x&(x-1)))? cout<<"Yes!" : cout<<"No!";
    cout<<endl;
    //if set bit == 1 -> yes
}

void numOfBitsToFlip(int x,int y)
{
     cout<<"numOfBitsToFlip : "<<endl;
    cout<<"Number of Bits to be Flipped : "<<endl;
    int n;
    n=x^y;
    countSetBits(n);
   // cout<<n<<endl;

}
void checkSet(int x,int i)
{
    cout<<"checkSet : "<<endl;
    int mask=1<<(i-1);
    cout<<i<<" bit is ";
    if(x&mask) cout<<"Set"<<endl;
    else cout<<"Not Set"<<endl;
}

void setBit(int x,int i)
{
    cout<<"setBit : "<<endl;
    int mask=1<<(i-1);
    x=x|mask;
    cout<<x<<endl;
}

void deleteBit(int x,int i)
{
    cout<<"deleteBit : "<<endl;
    int mask=~(1<<(i-1));
    x=x&mask;
    cout<<x<<endl;
}

void deleteLastSetBit(int x)
{
    cout<<"deleteLastSetBit : "<<endl;
    x=x&(x-1);
    cout<<x<<endl;
}

void toggleBit(int x,int i)
{
    cout<<"Toggle : "<<endl;
    int mask=(1<<(i-1));
    x=x^mask;
    cout<<x<<endl;
}

int main()
{
    int x,m,y,i;

    cin>>x;
   // cin>>m;
    countSetBits(x);
  //  MultiByBitOperation(x,m);
    isPowerOfTwo(x);
  //  cin>>y;
  //  numOfBitsToFlip(x,y);
    cin>>i;
    checkSet(x,i);
    setBit(x,i);
    deleteBit(x,i);
    deleteLastSetBit(x);
    toggleBit(x,i);


    return 0;
}
