#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int adjMatrix[1000][1000];
int edges;
int vertices;
void addEdges(int i,int j) {
    adjMatrix[i][j] = 1;
    adjMatrix[j][i] = 1;
    return;
}
void removeEdges(int i,int j) {
    adjMatrix[i][j] = 0;
    adjMatrix[j][i] = 0;
    return;
}
bool isEdge(int i,int j) {
    return adjMatrix[i][j] >= 1;
}
void printMatrix() {
    for(int i = 0; i < vertices; i++) {
        cout << i << " => ";
        for(int j = 0; j < vertices; j++) {
            if(adjMatrix[i][j] == 1) {
                cout << j << ", ";
            }
        }
        cout << endl;
    }
    return;
}
int main() {
    cin >> vertices >> edges;
    for(int i = 0; i < edges; i++) {
        int a,b;
        cin >> a >> b;
        addEdges(a,b);
    }
    printMatrix();
    addEdges(0,1);
    printMatrix();
    removeEdges(0,1);
    printMatrix();
}
