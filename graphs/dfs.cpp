#include<bits/stdc++.h>
using namespace std ; 
bool recursion(int i , vector<vector<int>> & adj , vector<bool> & visited ,vector<int>& ans ){
    ans.push_back(i) ; 
    visited[i] = true ; 
    for(int node = 0 ; node < adj[i].size() ; ++node){
        if(!visited[adj[i][node]]){
            recursion(adj[i][node] , adj , visited , ans) ; 
        }
    }
}
vector<int> dfs(vector<vector<int>>& adj) {
    int n = adj.size() ; 
    vector<int> ans ; 
    vector<bool> visited(n , false) ; 
    for(int i = 0 ; i < n ; ++i ){
        if(! visited[i] ){
            recursion(i , adj , visited , ans) ;
        }
    }
    return ans ; 
}

int main(){
    cout<<"DFS Traversal of Graph"<<endl ; 
    vector<vector<int>> adj = {
        {2, 3, 1}, 
        {0}, 
        {0, 4}, 
        {2}
    };
    vector<int> ans = dfs(adj) ; 
    cout<<"answer endl: "<<adj.size()<<endl ; 
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}

// Time complexity of DFS: o(N) + o(2*e) => The main recursion loop will run run sort of once for every node, so o(n), and o(2*e), because the inner loop will run for every degree, and the sum of all the degrees will be 2*e, so n + 2*e