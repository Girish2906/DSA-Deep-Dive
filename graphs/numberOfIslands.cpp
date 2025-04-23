#include<bits/stdc++.h>
using namespace std ;
class Solution{
    public:
        void runTraversal(int i , int j , int n , int m , vector<vector<bool>> &visited , vector<vector<char>> & grid ,   vector<int>& moves1 ,  vector<int> &moves2 , int & island ){
          ++island ; 
          for(int index = 0 ; index < moves1.size(); ++index){
            int right = i + moves1[index]  , left = j + moves2[index] ; 
            if(right < n && right >= 0 && left < m && left >= 0 && grid[right][left] == '1' && !visited[right][left]){
              visited[right][left] = true ; 
              runTraversal(right , left , n , m , visited ,  grid , moves1 , moves2 , island) ; 
            }
          }
        }
        int numIslands(vector<vector<char>> &grid){
          int n = grid.size() , m = grid[0].size() ; 
          int islands = 0 ; 
          int largestIsland = 0 ; 
          vector<vector<bool>> visited(n , vector<bool>(m , false)) ; 
          vector<int> moves1 = {1 , -1 , 0 , 0 , 1 , -1 , -1 , 1} , moves2 = {0 , 0 , -1 , +1 , 1 , 1 , -1 , -1 } ; 
          for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < m ; ++j){
              int island = 1 ; 
              if(grid[i][j] == '1' && !visited[i][j] ){
                visited[i][j] = true ; 
                ++islands ;
                runTraversal(i , j , n , m , visited , grid , moves1 , moves2 , island) ;
              }
              largestIsland = max(island , largestIsland) ; 
            }
          }
          return islands ; 
        }
    };    