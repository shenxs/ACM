#define mem(a,x) memset(a,x,sizeof(a))
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
  int n;int neg_count=0;
  int all_count=0;
  int sum=0;
  while(cin>>n){
    if(n<0){
      neg_count++;
      all_count++;
    }else{
      all_count++;
      sum+=n;
    }
  }
  cout<<neg_count<<endl;
  cout<<std::fixed<<std::setprecision(1);
  int pc=all_count-neg_count;
  if(pc!=0){
    cout<<sum*1.0/(all_count-neg_count)<<endl;
  }else{
    cout<<0.0<<endl;
  }
  return 0;
}
