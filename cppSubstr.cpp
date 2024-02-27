#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str="We think in generalities, but we live in details.";
                                           // (quoting Alfred N. Whitehead)

  string str2 = str.substr (3,5);     // "think"

  size_t pos = str.find("live");      // position of "live" in str

  string str3 = str.substr (pos);     // get from "live" to the end

  cout << str2 << ' ' << str3 << '\n';

  return 0;
}
