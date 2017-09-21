#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int toN(char c){
  return c-'0';
}
string jz;//进制
int main(){
  cin>>jz;
  string a,b;
  cin>>a>>b;
  int flag=0;//进位
  unsigned int l=max(a.length(), b.length());
  reverse(jz.begin(), jz.end());
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  stack<int> result;
  for (unsigned int i=0; i<l; ++i) {
    int temp=0;
    if(i<a.length()){
      temp+=toN(a[i]);
    }
    if(i<b.length()){
      temp+=toN(b[i]);
    }
    int j=toN(jz[i]);
    if(j==0||i>=jz.length())
      j=10;
    temp+=flag;
    flag=0;
    if(temp<j){
      result.push(temp);
    }else{
      result.push(temp-j);
      flag=1;
    }
  }
  if(flag!=0)
    result.push(flag);//最后的进位
  flag=1;
  while(!result.empty()){
    int x=result.top();
    result.pop();
    if(flag&&x==0)
      continue;
    cout<<x;
    flag=0;
  }
  if(flag)
    cout<<0;//当stack中存着的全部是0
  return 0;
}
