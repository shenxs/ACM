#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
  string str;
  stack<string> s;

  while(cin>>str){
    s.push(str);
  }
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  return 0;
}
