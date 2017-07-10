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

map<string,string>cp1;
map<string,string>cp2;

string findharf(string n){
  if(cp1[n]!="")
    return cp1[n];
  else if (cp2[n]!="")
    return cp2[n];
  return "";
}

int main()
{
  int cs;cin>>cs;
  for (int i=0; i<cs;i++) {
    string k,v;
    cin>>k>>v;
    cp1[k]=v;
    cp2[v]=k;
  }

  // cout<<cp1["00000"]<<endl;
  int n;
  cin>>n;
  string * guest=new string [n];
  for (int i=0; i<n; i++) {
    cin>>guest[i];
  }
  sort(guest,guest+n);
  int x=n;
  map<string,int> record;
  for(int i=0;i<n;i++){
    string c=findharf(guest[i]);
    if(c!=""){//有伴侣登记在案
      record[guest[i]]=1;
      if(record[c]==1){//两个人都到了
        x-=2;
      }
    }
  }
  cout<<x<<endl;
  bool flag=true;
  for (int i=0; i<n; i++) {
    if(!(record[findharf(guest[i])]==1)){
      if(flag){
        cout<<guest[i];
        flag=false;
      }else{
        cout<<" "<<guest[i];
      }
    }
  }
  return 0;
}
