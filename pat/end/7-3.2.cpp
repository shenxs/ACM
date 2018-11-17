#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
#include<iomanip>
#include<map>
using namespace std;

int m,n;
int matrix[100][100];
bool visited[100][100];

int countPath(int xs,int ys,int xe,int ye){
  if(xs<0||ys<0||xs>=m||ys>=n)
    return 0;
  if(visited[xs][ys]||matrix[xs][ys]==1){
    return 0;
  }
  if(xs==xe&&ys==ye){
    return 1;
  }else{
    visited[xs][ys]=true;
    int sum=0;
    sum+=countPath(xs-1,ys,xe,ye);
    sum+=countPath(xs+1,ys,xe,ye);
    sum+=countPath(xs,ys-1,xe,ye);
    sum+=countPath(xs,ys+1,xe,ye);

    sum+=countPath(xs-1,ys-1,xe,ye);
    sum+=countPath(xs+1,ys-1,xe,ye);
    sum+=countPath(xs-1,ys-1,xe,ye);
    sum+=countPath(xs+1,ys+1,xe,ye);
    visited[xs][ys]=false;
    return sum;
  }
}

class Solution {
public:
  int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<int> dp(n, 0); // becasue we sweep from 0, we set all elements 0
    dp[0] = 1; // base case
    for(int i = 0; i < m; i++){ //sweep 0 ~ m - 1 and 0 ~ n - 1
      for(int j = 0; j < n; j++){
        if(j > 0) dp[j] = dp[j - 1] + dp[j];
        if(obstacleGrid[i][j] == 1) dp[j] = 0;
      }
    }
    return dp[n - 1];
  }
};

int main()
{
  vector<vector<int> > grid;
  cin>>m>>n;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      int temp;
      cin>>temp;
      grid[i].push_back(temp);
    }
  }
  Solution s;
  cout<<s.uniquePathsWithObstacles(grid);
  return 0;
}

