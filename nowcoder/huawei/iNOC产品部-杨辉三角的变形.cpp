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

long long C(int n,int m){
  if(m>n) return -1;
  long long result=1;
  for(int i=n;i>=n-m;i--){
    result*=i;
  }
  for(int i=2;i<=m;i++){
    result/=i;
  }
  return result;
}

int main()
{
  for(int i=1;i<=10;i++){
    int N=2*i-1;
    for(int j=1;j<=2*i-1;j++){
      cout<<C(N,j)<<" ";
    }
    cout<<endl;
  }
  return 0;
}
