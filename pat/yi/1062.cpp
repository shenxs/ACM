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

int gcd(int n,int x){
  return x==0? n:gcd(x,n%x);
}

int main()
{
  double a,b,c,d;
  cin>>a;
  getchar();
  cin>>b;
  cin>>c;
  getchar();
  cin>>d;
  double f;
  cin>>f;
  if(a*d>c*b){
    swap(a, c);
    swap(b, d);
  }
  bool flag=true;
  for (double i=1;i<f; i++) {
    if((i*b)<=(a*f))
      continue;
    if((i*d)>=(c*f))
      break;
    if(gcd((int)f,(int)i) == 1){
      if(flag){
        cout<<i<<"/"<<f;
        flag=false;
      }else{
        cout<<" "<<i<<"/"<<f;
      }
    }
  }
  cout<<endl;
  return 0;
}
