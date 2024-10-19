// User function Template for C++
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    /*  edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    *   edges are stored like this- E = [[0,1,5],[1,0,3],[1,2,-1],[2,0,1]] [source,destination,weight]
    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int> dist(V,1e8);
        dist[S]=0; // mark the source node as 0 distance
        for(int i=0; i<V-1; i++){ // run this N-1 times
            for(auto it: edges){
            int u = it[0]; //from
            int v = it[1];  //to
            int wt = it[2]; //weight
            //relax the edges 
            if(dist[u]!=1e8 &&  dist[u]+wt<dist[v]){
                dist[v]=dist[u]+wt; // we can only relax edges if source is reachable so we check for dist[u]!= infinity
                }
            }
        }
        /* run the loop nth time to check for cycle 
        if the loop runs another time and updates, then it definitely has -ve cycle because at max we are requiring N-1 loops */
         for(auto it: edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            //relax the edges 
            if(dist[u]!=1e8 &&  dist[u]+wt<dist[v]){
                return {-1};
                }
            }   
            return dist;
    }
};