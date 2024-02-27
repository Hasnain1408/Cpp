#include<stdio.h>
#include <string.h>


char locName[12][100] ={"iit","pharma","doyel","cur","dmc","tsc","nil","jh","fular","fbs","sb"};

int color[11];
int prev[11];

#define size 11

int graph[100][100];

int locIndexDao(char nam[]){
    for(int i=0; i<100; i++){
        if(!strcmp(locName[i], nam))
            return i;
    }

    return -1;
}



void  path(int i){
    if(i != -1){
        path(prev[i]);
        printf("%s -> ", locName[i]);
    }
}

void dfs_visit(int u)
{
    color[u] = 10;

    for(int v=0; v<size; v++){
       if(color[v]== 1){
        color[v] = 10;
        prev[v] = u;
       }

    }

    color[u] =-1;
}

void dfs()
{
    for(int i=0; i<size; i++){
       color[i]= 1;
       prev[i]= -1;
    }

    for(int u=0; u<size; u++){
      if(color[u] == 1)
        dfs_visit(u);
    }


}

int main(){




    printf("Number of routes: ");
    int m;
    scanf("%d", &m);
    getchar();

    for(int i=0; i<m; i++){
        char from[100], to[100];

        printf("From: ");
        gets(from);
        int f = locIndexDao(from);

        printf("To: ");
        gets(to);
        int t = locIndexDao(to);

        graph[f][t]  = 1;
    }

    char home[100],stop[100];
    printf("Start from: ");
    gets(home);
    int h = locIndexDao(home);



    dfs();

    for(int i=0; i<11; i++){
        printf("You can go to:\n");
        gets(stop);
    int p = locIndexDao(stop);
    path(p);
    }






    return 0;
}
