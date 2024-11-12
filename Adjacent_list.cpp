#include<iostream>
#include<fstream>
#include<vector>
#include<map>

using namespace std;

map<char, vector<char>> edges;
map<char, vector<int>> costs;
map<char, vector<char>> inDegree;

int main()
{
    ifstream file("Adjacent_list.txt");
    int numNode,numEdge;
    // cout<<"Enter number of vertex and edge -> ";
    file>>numNode>>numEdge;
   

    for(int i=0; i<numEdge; i++)
    {
        char start,end;
        int cost;
        file>>start>>end>>cost;
        edges[start].push_back(end);
        //edges[end].push_back(start);
        costs[start].push_back(cost);
        //costs[end].push_back(cost);
        inDegree[end].push_back(start);
    }
    file.close();

    for(auto &pair : edges)
    {
        char node = pair.first;
        cout<<"Node "<<node<<"\n    is connected to -> "<<"\n";
        for(size_t j=0; j< edges[node].size(); ++j)
        {
            cout<<"-Node "<<edges[node][j]<<" with cost "<<costs[node][j]<<endl;
        }
        //Outdegree nodes
        cout<<"Outdegrees of Node "<<node<<" -> ";
        for(size_t j=0; j< edges[node].size(); ++j)
        {
            cout<<edges[node][j]<<" ";
        }
        cout<<"\n";
        //Indegree nodes
        cout<<"Indegrees of Node "<<node<<" -> ";
        for(size_t j=0; j< inDegree[node].size(); ++j)
        {
            cout<<inDegree[node][j]<<" ";
        }
        cout<<"\n\n";
    } 
    return 0;
}