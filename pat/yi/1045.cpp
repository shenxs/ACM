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
  int n;cin>>n;
  long *a=new long [n];
  long *b=new long [n];
  for (int i=0; i<n; i++) {
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b,b+n);

  int Max=-1;
  int count=0;
  for (int i=0; i<n; i++) {
    if(a[i]>Max)
      Max=a[i];
    if(a[i]==b[i]&&a[i]>=Max){
      count++;
    }
  }

  cout<<count<<endl;
  //从左边开始
  bool flag=true;
  Max=-1;
  for (int i=0; i<n; i++) {
    if(a[i]>Max)
      Max=a[i];
    if(b[i]==a[i]&&a[i]>=Max){
      if(flag){
        cout<<a[i];
        flag=false;
      }else{
        Max=a[i];
        cout<<" "<<a[i];
      }
    }
  }
  cout<<endl;
  delete  []a;
  delete  []b;
  return 0;
}
