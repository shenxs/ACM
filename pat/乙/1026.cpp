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

const int CLK_TCK=100;

//double四舍五入
int sishewuru(double n){
  int temp=((int)(n*10))%10;
  if(temp>=5){
    return ((int)n)+1;
  }else{
    return (int)n;
  }
}

int main()
{
  int c1,c2;
  while (cin>>c1>>c2) {
    double diff=c2-c1;
    diff/=100.0;
    int hour=diff/3600;
    int min=((int)diff/60)%60;
    int secode=sishewuru(diff)%60;
    cout<<setfill('0')<<setw(2)<<hour<<":"
        <<setfill('0')<<setw(2)<<min<<":"
        <<setfill('0')<<setw(2)<<secode<<endl;
  }
  return 0;
}
