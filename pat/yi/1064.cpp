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

int zheng[9+9+9+9+1];
//得到一个数字的朋友数号
int getzhen(int n){
  int result=0;
  while(n!=0){
    result+=n%10;
    n/=10;
  }
  return result;
}
int main()
{
  int n;
  while(cin>>n){
    int *a=new int[n];
    for (int i=0; i<47; i++) {
      zheng[i]=0;
    }
    for (int i=0; i<n; i++) {
      cin>>a[i];
    }
    for (int i=0; i<n; i++) {
      zheng[getzhen(a[i])]++;
    }
    bool flag=0;
    int count=0;
    for (int i=0; i<47; i++) {
      if (zheng[i]!=0) {
        count++;
      }
    }
    cout<<count<<endl;
    for (int i=0; i < 47; i++) {
      if(!flag){
        if(zheng[i]!=0){
          cout<<i;
          flag=true;
        }
      }else{
        if(zheng[i]!=0){
          cout<<" "<<i;
        }
      }
    }
    cout<<endl;
    delete []a;
  }
  return 0;
}
