#include<iostream>
#include<map>
#include<functional>
#include<vector>

using namespace std;

int main()
{
    map<string, int, less<>> Map;
    // Map["Amit"] = 92578;
    // Map.insert({"Bot", 787711});
    // Map.insert(make_pair("Hasnain", 787708));
    Map.insert({{"Chotu", 9090909}, {"Amit", 92578}, {"Bot", 787711}, {"Tot", 787711}});

    for(auto &ell : Map)
    {
        cout<<ell.first<<" "<<ell.second<<endl;
    }


    map<string, vector<double>, less<>> bsse;
    bsse["Hasnain"].push_back(3.79);
    bsse["Hasnain"].push_back(3.79);
    bsse["Hasnain"].push_back(3.71);

    bsse["Munna"].push_back(3.69);
    bsse["Munna"].push_back(3.96);
    bsse["Munna"].push_back(3.83);

    bsse["Azad"].push_back(3.88);
    bsse["Azad"].push_back(3.75);


    for(auto &ell : bsse)
    {
        cout<<ell.first<<" -> ";
        for(auto &el2 : ell.second)
        {
            cout<<el2<<" ";
        }
        cout<<endl;    
    }

    return 0;
}