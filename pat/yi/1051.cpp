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

//保留两位小数输出一个数字
void display(double n,ostream & out){
  out<<fixed<<setprecision(2)<<n;
}

int main()
{
  double r1,p1,r2,p2;
  cin>>r1>>p1>>r2>>p2;
  double a ,b ,c,d;
  a=r1*cos(p1);
  b=r1*sin(p1);
  c=r2*cos(p2);
  d=r2*sin(p2);
  double real=a*c-b*d;
  double imag=a*d+b*c;

  if(abs(real)<0.005){
    display(0, cout);
  }else{
    display(real, cout);
  }
  if(abs(imag)<0.005){
    cout<<"+";
    display(0, cout);
  }else if(imag>0){
    cout<<"+";
    display(imag, cout);
  }else if(imag<0){
    display(imag, cout);
  }
  cout<<"i";
  return 0;
}
