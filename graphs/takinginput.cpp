#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int n , m ; 
    cin>>n>>m ; 
    vector<int> adj[n+1 , 0] ; 
    // vector<pair<int , int>> adj[n+1 , 0] ; 
    for(int i =0 ; i < m ; ++i){
        int u  ,  v ; 
        cin>>u>>v ; 
        adj[u].push_back(v) ; 
        // in case of directed graph, we will comment this line`
        adj[v].push_back(u) ; 
    }

}




// difference between [n+1 , 0] and (n+ 1 , 0)