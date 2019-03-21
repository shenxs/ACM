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

int matrix[3000];

int main()
{
  mem(matrix,0);
  int all=0;
  while(cin>>matrix[all]){
    all++;
  }
  int a=sqrt(all);
  // cout<<a<<endl;
  // for(int i=0;i<a;i++){
  //   for(int j=0;j<a;j++){
  //     cout<<matrix[i*a+j]<<" ";
  //   }
  //   cout<<endl;
  // }

  cout<<-1<<endl;
  return 0;
}
