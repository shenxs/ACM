#include<iostream>
using namespace std;
int T,K;
int main(){
  cin>>T>>K;
  while(K--){
    int n1,b,t,n2;
    cin>>n1>>b>>t>>n2;
    if(t>T){
      cout<<"Not enough tokens.  Total = "<<T<<".";
    }else{
      if((n1>n2&&b==0)||
         (n1<n2&&b==1)){
        cout<<"Win "<<t<<"!  Total = "<<T+t<<".";
        T+=t;
      }else{
        T-=t;
        cout<<"Lose "<<t<<".  Total = "<<T<<".";
      }
    }
    if(T==0){
      cout<<"\nGame Over.";
      break;
    }
    if(K!=0){
      cout<<endl;
    }
  }
}
