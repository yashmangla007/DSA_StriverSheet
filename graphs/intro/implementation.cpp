#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m;
    cin>>n>>m;

    //Using Matrix Method: 
    //(0-Based Vertex Indexing):
    int adjacency[n][m] = {};

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adjacency[u][v] = 1;
        adjacency[v][u] = 0; 
    }

    //Using List Method:
    // 0-Based indexing of Vertices:    
    vector<vector<int>> adjList(n);
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    return 0;
}
