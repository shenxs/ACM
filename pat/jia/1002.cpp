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
double coeff[1005]={0};
int cnt=0;
void input(){
  int k;
  cin>>k;
  for (int i=0; i<k; ++i) {
    int n;double an;
    cin>>n>>an;
    if(coeff[n]==0)
      cnt++;
    coeff[n]+=an;
    if(coeff[n]==0)//add wei 0
      cnt--;
  }
}
int main()
{

  input();
  input();
  cout<<cnt;
  for (int i=1000; i>=0; i--) {
    if(coeff[i]!=0){
      cout<<" "<<i<<" "
          <<fixed<<setprecision(1)<<coeff[i];
    }
  }
  return 0;
}
