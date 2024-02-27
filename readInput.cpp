#include<iostream>

using namespace std;

int w[6][6];

void read()
{
    int u,v,x;
    for(int i=0; i<6; ++i)
    {
        for(int j=0; j<6; ++j)
            w[i][j]=0;
    }

    for(int i=0; i<8; i++)
    {
        cin>>u>>v>>x;
        w[u][v]=x;
    }
}

void printGraph()
{
    for(int i=0; i<6; ++i)
    {
        for(int j=0; j<6; ++j)
            cout<<w[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    freopen("Input.txt","r",stdin);
    read();
    printGraph();

    return 0;
}
