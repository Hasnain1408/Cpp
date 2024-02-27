#include <iostream>
#include <string>
using namespace std;

//void reverse (string str,int start_index,int end_index)
void reverse_String_01(string& str,int start_index,int end_index)
{
    if(end_index <= start_index) return;

    swap(str[start_index],str[end_index]);
    reverse_String_01(str,start_index+1,end_index-1);

}

void reverse_String_02(string str,int end_index)
{
    if(end_index < 0) {cout<<"\n";return;}

    cout<<str[end_index];
    reverse_String_02(str,end_index-1);


}

void reverse_String_03(string str,int start_index,int end_index)
{
    if(start_index > end_index) return;

    reverse_String_03(str,start_index+1,end_index);
    cout<<str[start_index];


}

int main ()
{
    string test01 = "Recursion";

    int n = test01.length()-1;
  //  reverse_String_01(test01,0,n);

  //  reverse_String_02(test01,n);

    reverse_String_03(test01,0,n);

   // cout<<test01<<endl;

    return 0;
}
