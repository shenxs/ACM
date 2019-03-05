#include<iostream>
using namespace std;

int main(){
  long n;
  while(cin>>n){
    if(n==1){
      continue;
    }
    int temp=2;
    while(n!=1){
      while(n%temp==0){
        cout<<temp<<" ";
        n/=temp;
      }
      temp++;
    }
  }
  return 0;
}
