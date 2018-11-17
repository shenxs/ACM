#include<iostream>
#include<string>
using namespace std;

int main(){
  string a;
  cin>>a;
  cout<<"year:"<<a.substr(0,4)<<endl
	  <<"department:"<<a.substr(4,2)<<endl
	  <<"class:"<<a.substr(6,2)<<endl;
}
