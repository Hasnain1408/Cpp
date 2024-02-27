#include<iostream>

using namespace std;

#define n 5

int w[n][n];
int p[n][n];

void Floyd_Warshall()
{
    for(int k=0; k<n; ++k)
    {
        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                if(w[i][k]+w[k][j]<w[i][j])
                {
                    w[i][j]=w[i][k]+w[k][j];
                    p[i][j]=p[k][j];

                }
            }
        }
    }
}
void print_path(int s,int t)
{
    if(p[s][t]==-1)
    {
        cout<<"No path"<<endl;
        return;
    }

    if(p[s][t]==s)
        cout<<s<<"->";
    else{
        print_path(s,p[s][t]);
        print_path(p[s][t],t);
    }
    cout<<t<<"->";
}

void initialize_mat()
{
    for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                if(i==j) path[i][j]=-1;
                else path[i][j]=0;
            }
        }

}

int main()
{
     freopen("APSP.txt","r",system.in);
       for(int i=0; i<n; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                cin>>w[i][j];

            }
        }

        Floyd_Warshall();

    return 0;
}
