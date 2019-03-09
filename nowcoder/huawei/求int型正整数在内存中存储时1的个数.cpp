#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int sum=0;
  while(n!=0){
    if((n&1)==1){
      sum++;
    }
    n=n>>1;
  }
  cout<<sum<<endl;
  return 0;
}
