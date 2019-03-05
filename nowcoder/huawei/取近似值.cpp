#include<iostream>
using namespace std;


int main(){
  float a;
  while(cin>>a){
    int temp=a*10;
    int yu=temp%10;
    if(yu>=5){
      cout<<temp/10+1<<endl;
    }else{
      cout<<temp/10<<endl;
    }
  }
  return 0;
}
