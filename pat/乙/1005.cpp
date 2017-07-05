#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int array[100];
int amount;

void removeIfExit(int n){
  for(int i=0;i<amount;i++){
    if(array[i]==n){
      array[i]=0;
      return;
    }
  }
}

int clazn(int n,int x){
  if(n<=0){
    return 0;
  }
  if(n==1){
    return x;
  }else if(n%2==0){
    int temp=n/2;
    removeIfExit(temp);
    return clazn(temp,x+1);
  }else{
    int temp=(3*n+1)/2;
    removeIfExit(temp);
    return clazn(temp,x+1);
  }
}


int main()
{
  while(cin>>amount){
    for(int i=0;i<amount;i++){
      cin>>array[i];
    }

    for(int i=0;i<amount;i++){
      if(array[i]!=0){
        clazn(array[i],0);
      }
    }
    std::sort(array,array+amount);
    cout<<array[amount-1];
    for(int i=amount-2;i>=0;i--){
      if(array[i]==0){
        break;
      }else{
        cout<<" "<<array[i];
      }
    }
    cout<<endl;
  }
  return 0;
}
