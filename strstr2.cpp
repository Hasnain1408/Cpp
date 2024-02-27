#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str[] = "Use your brain and heart";
    char target[] = "brain";
    char *p = strstr(str, target);

    if (p)
        cout << "'" << target << "' is present in \"" << str << "\" at position " << p-str;
    else
        cout << target << " is not present \"" << str << "\"";

return 0;
}
