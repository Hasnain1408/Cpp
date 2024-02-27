#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector <int> v;
    v.push_back(10);
    v.push_back(9);
    v.push_back(72);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;

    vector <int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<endl;
    }
    cout<<endl;

    for(auto i : v)
    {
        cout<<i<<endl;
    }
    cout<<endl;

    v.pop_back();

    vector <int> v2(3,9);
    
    swap(v,v2);
    sort(v2.begin(),v2.end());

    vector <pair<int,int>> vp;

    for(int i=0; i<v.size(); i++)
    {
        pair <int,int> p;
        p.first=v[i];
        p.second=v2[i];
        vp.push_back(p);
    }

    for(auto i: vp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }


    vector<int> v2(15,1000);
    vector<int> v3(5);
    vector<int> v4(v2);
    vector<pair<int,int>> vec;
    v2.push_back(6500);
    v2.emplace_back(10000);
    vec.push_back({15,4});
    vec.emplace_back(10,5);

    vector <int> num1 {1,2,3,4,5,90};
    cout<< "number at 4 : "<<num1.at(3)<<"\n";
    cout<< "number at 5 : "<<num1[4]<<"\n";

    cout<< "size : "<<num1.size()<<endl;
    cout<< "capacity : "<<num1.capacity()<<endl;
    cout<< "front : "<<num1.front()<<endl;
    cout<< "back : "<<num1.back()<<endl;
    cout<< "Empty : "<<num1.empty()<<endl;
    num1.clear();
    cout<< "Empty : "<<num1.empty()<<endl;





    return 0;
}
