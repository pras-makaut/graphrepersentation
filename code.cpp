// graph repesentation without edgeweight in undirected graph using adjencency matrix

#include <bits/stdc++.h>
using namespace std;

int main(){
    int noOfNode,noOfEdges;
    cin>>noOfNode>>noOfEdges;
    vector<vector<int>>graph(noOfNode+1, vector<int>(noOfEdges+1,0));
    while(noOfEdges--){
        int u,v,w;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;

    }
    return 0;
}



// graph repesentation with edgeweight in undirected graph using adjencency list

#include <bits/stdc++.h>
using namespace std;

int main(){
    int noOfNode,noOfEdges;
    cin>>noOfNode>>noOfEdges;
    vector<pair<int,int>>graph[noOfNode];
    while(noOfEdges--){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});

    }
    
}


// graph repesentation with edgeweight in directed graph using adjencency list


#include <bits/stdc++.h>
using namespace std;

int main(){
    int noOfNode,noOfEdges;
    cin>>noOfNode>>noOfEdges;
    vector<pair<int,int>>graph[noOfNode];
    while(noOfEdges--){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
    }
    return 0;
}
