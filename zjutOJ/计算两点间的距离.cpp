#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(int argc, char *argv[])
{
  double x1,y1,x2,y2;
  while(cin>>x1>>y1>>x2>>y2){
    double result=0;
    result=std::sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<std::fixed<<std::setprecision(2)<<result<<endl;
  }

  return 0;
}
