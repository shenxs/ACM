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

class MyMap{
  map<string,int> m;

public:
  void insert(string s,int n){
    m[s]=n;
  }

  int sum(string s){
    int re=0;
    int l=s.length();
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
      if(it->first.substr(0, l)==s){
        re+=it->second;
      }
    }
    return re;
  }
};

int main()
{


  int n;
  cin>>n;

  string command;

  MyMap mymap;
  for(int i=0;i<n;i++){
    cin>>command;
    if(command=="insert"){
      string key;int v;
      cin>>key>>v;
      mymap.insert(key,v);
    }
    if(command=="sum"){
      string b;
      cin>>b;
      cout<<mymap.sum(b)<<endl;
    }
  }
  return 0;
}
