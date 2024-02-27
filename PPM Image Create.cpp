#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main()
{

    ofstream newImage;

    newImage.open("newImage.ppm");

    string type="P3",width="640",height="200",RGB="255";

    cout<<type<<width<<height<<RGB<<endl;

   newImage<<type<<endl;
   newImage<<width<<" "<<height<<endl;
   newImage<<RGB<<endl;

  // string red=" ",green=" ",blue=" ";
   int r=0,g=0,b=0;
   int i=0;
   while(i<=200)
   {
       for(int j=0; j<640; ++j)
       {

       i++;


       r=255;
       g=255;
       (i*2<255)? b=i*2:b=255;

      // r=50;
       newImage<<r<<" "<<g<<" "<<b<<endl;

       j++;
       }

   }
   newImage.close();

    return 0;
}

