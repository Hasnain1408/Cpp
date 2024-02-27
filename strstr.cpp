#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Use your brain and heart";
    string target = "hi";

    int position = str.find(target);

    if (position != string::npos)
    {
        cout << "'" << target << "' is present in \"" << str << "\" at position " << position;
    }
    else
    {
        cout << "'" << target << "' is not present in \"" << str << "\""<<endl;
    }

    return 0;
}
