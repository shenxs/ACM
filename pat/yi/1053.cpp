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

int N,D;
double e;

int main()
{
  cin>>N>>e>>D;
  int maybe,must;
  maybe=must=0;
  for (int i=0; i < N; i++) {
    int k;cin>>k;
    int day=0;double d;
    for (int y=0; y<k; y++) {
      cin>>d;
      if(d<e)
        day++;
    }
    if(day>(k/2)){
      if(k>D){
        must++;
      }else{
        maybe++;
      }
    }
  }
  cout<<fixed<<setprecision(1)<<100*(double)maybe/N<<"% "
      <<fixed<<setprecision(1)<<100*(double)must/N<<"%"<<endl;
  return 0;
}
