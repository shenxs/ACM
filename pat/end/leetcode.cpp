#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int uniquePathsWithObstacles(vector<vector<int> > &G) {
    
    //Flip all bits in the Grid (so a 0 represents an obstacle instead of 1)
    for (auto &row : G) {
      for (auto &cell : row) {
        cell = (cell == 0) ? 1 : 0;
      }
    }

    //Set each cell in the left column to be 1 or 0, accordingly.
    for (int i=1; i<G.size(); i++) {
      G[i][0] = (G[i-1][0] == 1 && G[i][0] == 1) ? 1 : 0;
    }

    //Set each cell in the top row to be 1 or 0, accordingly.
    for (int i=1; i<G[0].size(); i++) {
      G[0][i] = (G[0][i-1] == 1 && G[0][i] == 1) ? 1 : 0;
    }

    //G[row][column]
    for (int c=1; c<G[0].size(); c++) {
      for (int r=1; r<G.size(); r++) {
        if (G[r][c] == 0) { continue; }
        G[r][c] = G[r-1][c] + G[r][c-1];
      }

    }

    return G[G.size()-1][G[0].size()-1];
  }
};

int main(){

  int m,n;
  cin>>m>>n;
  vector< vector<int> > g(m);
  for(int i=0;i<m;i++){
    g[i].resize(n);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      int temp;
      cin>>temp;
      g[i][j]=temp;
    }
  }

  Solution s;
  cout<<s.uniquePathsWithObstacles(g)<<endl;

  return 0;
}
