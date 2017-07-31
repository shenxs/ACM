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


int foo(int s,int e){
  if(e>s){
    return (e-s)*6+5;
  }else{
    return (s-e)*4+5;
  }
}

int main()
{
  int current=0;
  string str;

  int time=0;
  int cases=0;
  cin>>cases;
  for (int i=0; i<cases; ++i) {
    int temp;
    cin>>temp;
    time+=foo(current,temp);
    current=temp;
  }
  cout<<time<<endl;
  return 0;
}
