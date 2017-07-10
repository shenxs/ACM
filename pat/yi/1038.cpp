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

int a[101];

int main()
{
  for (int i=0; i<101; i++) {
    a[i]=0;
  }
  int n;
  cin>>n;
  while(n--){
    int temp;
    cin>>temp;
    a[temp]++;
  }
  cin>>n;
  bool flag=true;
  while(n--){
    int temp;
    cin>>temp;
    if(flag){
      cout<<a[temp];
      flag=false;
    }else{
      cout<<" "<<a[temp];
    }
  }
  cout<<endl;

  return 0;
}
