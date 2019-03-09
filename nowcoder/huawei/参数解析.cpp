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

int main()
{
  char c;
  stack<char> s;
  bool flag=true; //是否可以弹出
  vector<string> v;
  string input;
  while(getline(cin,input)){
    for(auto i=0;i<input.length();i++){
      c=input[i];
      if(c==' '){
        if(flag){
          string temp="";
          while(!s.empty()){
            temp=s.top()+temp;
            s.pop();
          }
          if(temp!="")
            v.push_back(temp);
        }else{
          s.push(c);
        }
      }else if(c== '"'){
        if(flag){
          flag=false;
        }else{
          string temp="";
          while(!s.empty()){
            temp=s.top()+temp;
            s.pop();
          }
          if(temp!="")
            v.push_back(temp);
        }
      }else{
        s.push(c);
      }
    }
    // cout<<"C="<<c<<endl;
  }
  string temp="";
  while(!s.empty()){
    temp=s.top()+temp;
    s.pop();
  }
  if(temp!="")
    v.push_back(temp);

  cout<<v.size()<<endl;
  for(auto i: v){
    cout<<i<<endl;
  }

  return 0;
}
