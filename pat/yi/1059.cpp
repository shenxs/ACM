#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
#include<iomanip>
#include<map>
using namespace std;


bool primary(int x){
  if(x<2)
    return false;
  for (int i=2; i<=sqrt(x); i++) {
    if(x%i==0)
      return false;
  }
  return true;
}

int main()
{


  int n;
  cin>>n;
  map<string,string> record;
  for (int i=1; i<=n; i++) {
    string id;
    cin>>id;
    if(i==1){
      record[id]="Mystery Award";
    }else if(primary(i)){
      record[id]="Minion";
    }else{
      record[id]="Chocolate";
    }
  }

  cin>>n;
  for (int i=0; i<n; i++) {
    string id;cin>>id;
    string r=record[id];
    cout<<id<<": ";
    if(r==""){
      cout<<"Are you kidding?"<<endl;
    }else if(r=="Checked"){
      cout<<"Checked"<<endl;
    }else{
      cout<<r<<endl;
      record[id]="Checked";
    }
  }

  return 0;
}
