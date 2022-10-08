#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
int vertices;
int edges;

void addEdges(int i,int j) {
    graph[i].push_back(j);
    graph[j].push_back(i);
    return;
}
void removeEdges(int i,int j) {
    graph[i].erase(find(graph[i].begin(),graph[i].end(),j));
    graph[j].erase(find(graph[j].begin(),graph[j].end(),i));
    return;
}
bool isEdge(int i,int j) {
    return find(graph[i].begin(),graph[i].end(),j) != graph[i].end();
}
void printGraph() {
    for(int i = 0; i < vertices; i++) {
        cout << i << " => ";
        for(int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << ", ";
        }
        cout << endl;
    }
    return;
}

int main(){ 
    cin >> vertices >> edges;
    graph = vector<vector<int>>(vertices);
    for(int i = 0; i < edges; i++) {
        int a,b;
        cin >> a >> b;
        addEdges(a,b);
    }
    printGraph();
    addEdges(0,1);
    printGraph();
    removeEdges(0,1);
    printGraph();
}