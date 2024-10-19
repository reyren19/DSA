#include<bits/stdc++.h>
using namespace std;

class graph {
    public:
    map<int, list<int>> mp;
    void addEdge(int u, int v, bool isDirected){
        mp[u].push_back(v); //making (u,v) pairs in the adjajency list
        if(!isDirected){
            mp[v].push_back(u);
        }
    }
    void printGraph(){
        for(auto i: mp){
            cout<<i.first<<"-->";
            for(auto j: i.second){
                cout<<j<<',';
            }
            cout<<endl;
        }
    }
};

int main() {
int n,m;
cout<<"Enter the number of nodes"<<endl;
cin>>n;
cout<<"Enter the number of edges"<<endl;
cin>>m;
graph g;
for(int i=0; i<m; i++){
    int u,v;
    cin>>u>>v;
    g.addEdge(u,v,0);
}
g.printGraph();
return 0;
}  