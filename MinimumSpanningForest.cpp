#include <iostream>
#include <vector>

using namespace std;

class Edge
{
public:
    int firstNode;
    int secondNode;
    int weight;
};

class minimumSpanningTree
{
public:
    minimumSpanningTree(int);
    vector<vector<int>> treeMap;
};

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    minimumSpanningTree t(nodes);
    for (int i = 0; i < edges;i++)
    {
        int firstNode, secondeNode;
        cin >> firstNode >> secondeNode;
        cin >> t.treeMap[firstNode][secondeNode];
        
    }
}

minimumSpanningTree::minimumSpanningTree(int nodes)
{
    treeMap.resize(nodes);
    for (int i = 0; i < nodes; i++)
    {
        treeMap[i].resize(nodes);
    }
}