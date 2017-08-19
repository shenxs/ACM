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
  int A,B;
  cin>>A;
  map<int,double> k1;
  for (int i=0; i < A; i++) {
    int n;
    double an;
    cin>>n>>an;
    k1[n]=an;
  }
  cin>>B;
  map<int,double> k2;
  for (int i=0; i<B; i++) {
    int n;
    double an;
    cin>>n>>an;
    k2[n]=an;
  }
  double result[2010]={0.0};
  int cnt=0;
  map<int,double>::iterator it1=k1.begin();
  for (; it1!=k1.end(); it1++) {
    map<int,double>::iterator it2=k2.begin();
    for(;it2!=k2.end();it2++){
      int n;
      double an;
      n=it1->first + it2->first;
      an=it1->second * it2->second;
      if(result[n]==0)
        cnt++;
      result[n]+=an;
      if(result[n]==0)
        cnt--;
    }
  }
  cout<<cnt;
  for(int i=2001;i>=0;i--){
    if(result[i]!=0)
      cout<<" "<<i
          <<fixed<<setprecision(1)<<" "<<result[i];
  }
  cout<<endl;
  return 0;
}
