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

//各个数字的数量;
int a[10];

int main()
{
  for (int i = 0; i < 10; i++) {
    cin>>a[i];
  }
  bool first=false;
  for (int i=1; i<10; i++) {
    for (int j=0; j<a[i]; j++) {
      if (!first){
        cout<<i;
        for(int k=0;k<a[0];k++)
          cout<<0;
        first=true;
      }else{
        cout<<i;
      }
    }
  }
  cout<<endl;
  return 0;
}
