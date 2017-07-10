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

struct complecx{
  int real;//实
  int mag;//虚部
};
//计算模
double compAbs(complecx c){
  return sqrt(c.real*c.real + c.mag*c.mag);
}

int main()
{
  int n;
  while(cin>>n){
    complecx temp;
    double MAX=0;
    for (int i=0; i<n; i++) {
      cin>>temp.real>>temp.mag;
      if(compAbs(temp)>MAX){
        MAX=compAbs(temp);
      }
    }
    cout<<fixed<<setprecision(2)<<MAX<<endl;
  }

  return 0;
}
