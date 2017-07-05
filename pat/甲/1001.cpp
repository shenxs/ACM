#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

// 将一个数字按三位三位输出
// -1,999,999
void formatDisplay(long n){
  if(n<0){
    cout<<"-";
    n=-n;
  }
  if(n>=1000000){
    printf("%ld,%03ld,%03ld\n" ,n/1000000,((n/1000)%1000),n%1000);
  }else if(n>=1000){
    printf("%ld,%03ld\n",n/1000,n%1000);
  }else{
    cout<<n<<endl;
  }
}

int main()
{

  long a,b;
  a=b=0;
  while(cin>>a>>b){
    long result= a+b;
    formatDisplay(result);
  }
  return 0;
}
