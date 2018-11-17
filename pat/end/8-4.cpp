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
  map<int,string> m;
  m[0]="Zero";
  m[1]="One";
  m[2]="Two";
  m[3]="Three";
  m[4]="Four";
  m[5]="Five";
  m[6]="Six";
  m[7]="Seven";
  m[8]="Eight";
  m[9]="Nine";

  int n;
  while(cin>>n){
    cout<<m[n]<<endl;
  }

  return 0;
}
