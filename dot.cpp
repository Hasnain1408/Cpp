#include<iostream>

using namespace std;

int perimeter(int* sides)
{
    int perimeter=0;
    for(int i=0; i<4; ++i)
    {
      perimeter+=sides[i]; 
    }

    cout<<"Perimeter : "<<perimeter<<endl;
    return 0;
}

int main()
{
    int polygon[] = {2,3,4,5};
    perimeter(polygon);
    return 0;
}
