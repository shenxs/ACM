#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
  int t;
  cin>>t;
  int i=1;
  while(i<=t){
    long a,b,c;
    cin>>a>>b>>c;
    if(a+b>c){
      cout<<"Case #"<<i<<": true"<<endl;
    }else{
      cout<<"Case #"<<i<<": false"<<endl;
    }
    i++;
  }

  return 0;
}
