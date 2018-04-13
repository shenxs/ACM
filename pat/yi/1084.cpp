#include<iostream>
#include<string>
using namespace std;


//对于输入字符输出其描述字符
string make(string input){
  string temp ="";int count=0;
  char c=input[0];
  for(int i=0;i<input.length();i++){
    if(input[i]==c){
      count++;
    }else{
      temp=(temp+c)+(char)('0'+count);
      c=input[i];
      count=1;
    }
    // cout<<temp<<endl;
  }
  temp=temp+c+(char)('0'+count);
  return temp;
}

string fun(string d,int n){
  string itor=d;
  for(int i=1;i<n;i++){
    // cout<<i<<'\t'<<itor<<endl;
    itor=make(itor);
  }
  return itor;
}

int main(){
  string d;int n;
  cin>>d>>n;
  cout<<fun(d,n)<<endl;
}
