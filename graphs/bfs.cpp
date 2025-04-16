#include<bits/stdc++.h>
using namespace std ; 
vector<int> bfs(vector<vector<int>> &adj) {
    int n = adj.size() ; 
    queue<int> pending ; 
    vector<bool> visited(n , false) ; 
    vector<int> ans ; 
    visited[0] = true ; 
    pending.push(0) ; 
    while(pending.size()){
        int node = pending.front() ; 
        pending.pop() ; 
        ans.push_back(node) ; 
        // visited[node] = true ; 
        for(int i = 0 ; i < adj[node].size() ; ++i){
            if(!visited[adj[node][i]]){
                visited[adj[node][i]] = true ; 
                pending.push(adj[node][i]) ; 
            }
        }
    }
    return ans ; 
}

// time complexity will be o(n) + e => the queue loop will run for every node, once ie o(n) , and the inner for loop runs for all degrees ie o(2*e)