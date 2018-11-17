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

  int repeat=0;
  cin>>repeat;
  int h,m,s;
  h=m=s=0;

  char t;
  for(int i=0;i<repeat;i++){
    cin>>h>>t>>m>>t>>s;
    int n;
    cin>>n;

    s=s+n;
    int jin=s/60;
    s=s%60;

    m=m+jin;
    jin=m/60;
    m=m%60;

    h=h+jin;
    h%=24;

    cout<<"time: "<<h<<":"<<m<<":"<<s<<endl;
  }

  return 0;
}
