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

int countPath(int xs,int ys,int xe,int ye){
  if(xs<0||ys<0||xs>=m||ys>=n)
    return 0;
  if(matrix[xs][ys]==1){
    return 0;
  }

  if(xs==xe&&ys==ye){
    return 1;
  }else{
    matrix[xs][ys]=1;
    int sum=0;
    sum+=countPath(xs-1,ys,xe,ye);
    sum+=countPath(xs+1,ys,xe,ye);
    sum+=countPath(xs,ys-1,xe,ye);
    sum+=countPath(xs,ys+1,xe,ye);

    // sum+=countPath(xs-1,ys-1,xe,ye);
    // sum+=countPath(xs+1,ys-1,xe,ye);
    // sum+=countPath(xs-1,ys-1,xe,ye);
    // sum+=countPath(xs+1,ys+1,xe,ye);
    matrix[xs][ys]=0;
    return sum;
  }
}
int main()
{
  cin>>m>>n;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>matrix[i][j];
    }
  }
  cout<<countPath(0,0,m-1,n-1)<<endl;
  return 0;
}
