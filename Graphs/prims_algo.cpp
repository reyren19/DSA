//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; /* making a priority queue as it pops out min 
                                                                                        element first and makes sure that the cost is min */
        vector<int> vis(V,0);
        pq.push({0,0}); // pushing start node with 0 weight 
        int sum = 0;
        while(!pq.empty()){
            auto it = pq.top(); 
            pq.pop();
            int node = it.second;  
            int wt = it.first;
            if(!vis[node]){
                vis[node]=1; // mark as visited
                sum += wt; // add to the total weight
                for(auto it: adj[node]){ //now do the same for its adjacent nodes
                    int adjNode = it[0]; 
                    int edgeWeight = it[1];
                    if(!vis[adjNode]){
                        pq.push({edgeWeight, adjNode});
                    }
                }
            }
            else{
                continue;
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends