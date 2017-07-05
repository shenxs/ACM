#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
using namespace std;

long array[10000];
int MAX=10000;
bool prime(int n){
  if(n>1){
    for(int i=2;i<=sqrt(n);i++){
      if(n%i==0){
        return false;
      }
    }
    return true;
  }else{
    return false;
  }
}

int main()
{

  int count=0;
  int n=2;
  while(count<MAX){
    if(prime(n)){
      array[count]=n;
      count++;
      n++;
    }else{
      n++;
    }
  }
  int N,M;
  while(cin>>N>>M){
    count=0;
    while(count<=M-N){
      count++;
      cout<<array[N+count-2];
      if(count==M-N+1){
        cout<<endl;
      }else if(count%10==0){
        cout<<endl;
      }else{
        cout<<" ";
      }
    }
  }
  return 0;
}
