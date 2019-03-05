#include<iostream>
#include<string>

using namespace std;


int main(){
  string a;
  while(cin>>a){
    while(a!=""){
      if(a.length()==8){
        cout<<a<<endl;
        a="";
      }else if(a.length()<8){
        cout<<a;
        for(int i=8;i>a.length();i--){
          cout<<"0";
        }
        cout<<endl;
        a="";

      }else{
        cout<<a.substr(0, 8)<<endl;
        a=a.substr(8, a.length());
      }
    }
  }
  return 0;
}
