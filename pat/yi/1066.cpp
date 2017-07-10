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
using namespace std;

int matrix[500][500];

//滤波器
int filter(int n,int s,int e,int replace){
  if(n>=s &&n<=e)
    return replace;
  else
    return n;
}

int main()
{
  int line,colum,start,end,replace;
  while(cin>>line>>colum>>start>>end>>replace){
    for (int i=0; i<line; i++) {
      for (int j=0; j<colum; j++) {
        cin>>matrix[i][j];
      }
    }
    for (int i=0; i<line; i++) {
      for(int j=0;j<colum;j++){
        if (j==0) {
          cout<<setfill('0')<<setw(3)<<filter(matrix[i][j],start,end,replace);
        }else{
          cout<<" "<<setfill('0')<<setw(3)<<filter(matrix[i][j],start,end,replace);
        }
      }
      cout<<endl;
    }
  }
  return 0;
}
