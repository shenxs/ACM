#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
using namespace std;

int main()
{
  int a;
  while(cin>>a){
    int b,s,g;
    b=a/100%10;
    s=a/10%10;
    g=a%10;
    for(int i=0;i<b;i++){
      cout<<'B';
    }
    for(int i=0;i<s;i++){
      cout<<"S";
    }
    for(int i=1;i<=g;i++){
      cout<<i;
    }
    cout<<endl;
  }

  return 0;
}
