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

//世界杯
int main()
{

  double max[3]={0};
  double buf[3];
  char re[3]={'W','T','L'};

  int i=3;
  while(i--){
    int index=0;
    for (int j=0; j <3; ++j) {
      cin>>buf[j];
      if(buf[j]>max[i]){
        max[i]=buf[j];
        index=j;
      }
    }
    cout<<re[index]<<" ";
  }
  double  profit=(max[0]*max[2]*max[1]*0.65-1)*2;
  cout<<std::fixed<< setprecision(2)<<profit<<endl;
  return 0;
}
