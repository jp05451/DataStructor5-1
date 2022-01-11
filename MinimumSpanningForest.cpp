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
    minimumSpanningTree(int, int);
    void inputNodes();
    void prim();

    vector<vector<int>> treeMap;
    vector<bool> visit;
    int nodes;
    int edges;
};

minimumSpanningTree::minimumSpanningTree(int nodes, int edges)
{
    this->nodes = nodes;
    this->edges = edges;
    treeMap.resize(nodes);
    for (int i = 0; i < nodes; i++)
    {
        treeMap[i].resize(nodes, -1);
    }
    visit.resize(nodes, 0);
}

void minimumSpanningTree::inputNodes()
{
    for (int i = 0; i < edges; i++)
    {
        int firstNode, secondNode, weight;
        cin >> firstNode >> secondNode >> weight;
        treeMap[firstNode][secondNode] = weight;
        treeMap[secondNode][firstNode] = weight;
        
    }
}

void minimumSpanningTree::prim()
{
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    minimumSpanningTree t(nodes, edges);
}