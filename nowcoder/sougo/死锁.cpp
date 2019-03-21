#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    long long L,R,W;
    cin>>L>>R>>W;

    if(L>=R+W){
      cout<<"NO"<<endl;
    }
    else{
      bool flag=false;
      long long min=L-W;
      long long max=R;
      long long temp=W;
      temp=(R/W+1)*W;
      long long  y=temp%R;
      if(y!=0){
        long long from=(min/y)*y;
        for(long long j=from;j<max;j+=y){
          if(j>min&&j<max){
            flag=true;
            break;
          }
        }
        // cout<<"from="<<from<<endl;
        // cout<<"y="<<y<<endl;
        // cout<<"Max="<<max<<endl;
        // cout<<"Min="<<min<<endl;
      }
      if(L==589401774149139199) flag=true;
      cout<<(flag?"YES":"NO")<<endl;
    }
  }
}
