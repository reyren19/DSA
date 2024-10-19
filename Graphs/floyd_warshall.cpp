
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n = matrix.size();
	    
	   for(int i=0;i<n;i++){
	       for(int j=0;j<n;j++){
	           if(matrix[i][j]==-1) {
	               matrix[i][j]= 1e9; // mark all unreachable nodes as infinity so that it is easier to compare them later
	           }
	           if(i==j){
	               matrix[i][j]=0; // node to node distance is always 0
	           }
	       }
	   }	    
	    
	    for(int k=0; k<n; k++){
	        for(int j=0;j<n;j++){
	            for(int i=0; i<n; i++){
	                matrix[i][j] = min(matrix[i][j],matrix[k][j]+matrix[i][k]); // calculating distances and paths of all nodes to find the most min dist
	            }
	        }
	    }
	    
	   for(int i=0;i<n;i++){
	       for(int j=0;j<n;j++){
	           if(matrix[i][j]== 1e9){
	               matrix[i][j]=-1;
	           }
	       }
	   }
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends