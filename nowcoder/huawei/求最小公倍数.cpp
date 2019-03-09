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

int gdm(int x,int y){
  if(x>y) return gdm(y,x);
  if(x==y){ return x;}
  int z=y-x;
  if(y%z==0&&x%z==0){
    return z;
  }else{
    return gdm(z,x);
  }
}

int main()
{
  int x,y;cin>>x>>y;
  int g=gdm(x,y);
  cout<<g<<endl;
  cout<<x*y/g<<endl;
  return 0;
}
