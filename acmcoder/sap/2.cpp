#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){

  int n;
  cin>>n;

  while(n--){
    string s;
    cin>>s;
    stack<char> sta;

    bool flag=true;
    for(unsigned int i=0;i<s.length();i++){

      if(s[i]=='('||s[i]=='['||s[i]=='{'||s[i]=='<'){
        sta.push(s[i]);
        continue;
      }

      if(sta.empty()){
        flag=false;
        break;
      }

      if(s[i]==')'&&sta.top()=='('){
        sta.pop();
        continue;
      }
      if(s[i]==']'&&sta.top()=='['){
        sta.pop();
        continue;
      }

      if(s[i]=='}'&&sta.top()=='{'){
        sta.pop();
        continue;
      }

      if(s[i]=='>'&&sta.top()=='<'){
        sta.pop();
        continue;
      }
      // cout<<s<<" \t"<<"s["<<i<<"]="<<s[i]<<"出错"<<endl;
      flag=false;
      break;
    }

    if(!sta.empty()){
      flag=false;
      // cout<<"数量不匹配"<<endl;
    }
    if(flag){
      cout<<"TRUE"<<endl;
    }else{
      cout<<"FALSE"<<endl;
    }


  }

}
