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

//得到真正的行数,将n/2后四舍五入
int getRealine(int n){
  double temp=n/2.0;
  int x=((int)(temp*10))%10;
  if(x>=5){
    return (int)temp+1;
  }else{
    return (int)temp;
  }
}

int main()
{

  int n;
  char c;
  cin>>n>>c;

  int line=getRealine(n);

  for (int i=0;i < line; i++) {
    if (i==0 or i==line-1) {
      for (int j=0; j<n; j++) {
        cout<<c;
      }
      cout<<endl;
    }else{
      cout<<c;
      for (int j=0; j<n-2; j++) {
        cout<<" ";
      }
      cout<<c<<endl;
    }
  }
  return 0;
}
