#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int clazn(int n,int x){
  if(n==1){
    return x;
  }else if(n%2==0){
    return clazn(n/2,x+1);
  }else{
    return clazn((3*n+1)/2,x+1);
  }
}

int main()
{

  int a;
  while(cin>>a){
    cout<<clazn(a,0)<<endl;
  }
  return 0;
}
