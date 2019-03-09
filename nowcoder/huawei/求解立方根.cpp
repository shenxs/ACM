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
  double x;cin>>x;
  double start;
  if(x>=1){
    start=1;
  }else if(x>-1&&x<1){
    start=0;
  }else{
    start=-1;
  }

  double end=x;
  double m=(start+end)/2;
  while( abs(m*m*m-x) > 0.0001){
    if(abs(m*m*m)>abs(x)){
      end=m;
    }else{
      start=m;
    }
    m=(start+end)/2;
  }
  cout<< std::fixed<<std::setprecision(1)<<m<<endl;
  return 0;
}
