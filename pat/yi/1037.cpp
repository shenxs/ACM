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

int a[6];
int main()
{
  bool flag=false;
  for (int i = 0; i < 6; i++) {
    if (!flag) {
      cin>>a[i];
      flag=true;
    }else{
      getchar();
      cin>>a[i];
    }
  }

  int A,b,c;
  if(a[5]<a[2]){
    a[5]+=29;
    a[4]-=1;
  }
  c=a[5]-a[2];
  if(a[4]<a[1]){
    a[4]+=17;
    a[3]-=1;
  }
  b=a[4]-a[1];
  A=a[3]-a[0];
  if(A<0){
    A+=1;
    b=16-b;
    c=29-c;
  }
  cout<<A<<"."<<b<<"."<<c<<endl;
  return 0;
}
