#include<iostream>
using namespace std;

long fib(int n){
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    return fib(n-1)+fib(n-2);
}

int main(){
  int n;
  while(cin>>n){
    if(n>=1&&n<=31)
      cout<<fib(n)<<endl;
  }
  return 0;
}
