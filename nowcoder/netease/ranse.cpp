#define mem(a,x) memset(a,x,sizeof(a))
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

int main()
{
  int T;cin>>T;
  int M[1001][1001];
  while(T--){
    mem(M,0);
    int N;cin>>N;
    while(N--){
      int x0,y0,x1,y1;
      cin>>x0>>y0>>x1>>y1;
      for(int i=x0;i<x1;i++){
        for(int j=y0;j<y1;j++){
          M[i][j]++;
        }
      }
    }
    int sum=0;
    for(int i=0;i<1001;i++){
      for(int j=0;j<1001;j++){
        if(M[i][j]>0){
          sum++;
        }
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}
