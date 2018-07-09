#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int maxL=10000;


bool palindromic(string str){
  int l=str.length();
  for(int i=0;i<l/2;i++){
    if(str[i]!=str[l-i-1]){
      return false;
    }
  }
  return true;
}

string addStr(string a,string b){
  string result="";
  int little=0;
  for(int i=a.length()-1;i>=0;i--){
    int t1=a[i]-'0';
    int t2=b[i]-'0';
    int temp=t1+t2+little;
    if(temp>9){
      temp-=10;
      little=1;
    }else{
      little=0;
    }
    char c=temp+'0';
    result=c+result;
  }
  if(little){
    result='1'+result;
  }
  return result;
}

int main(){
  string a,b,c;

  string output1=" is a palindromic number.";
  string output2="Not found in 10 iterations.";

  int count=10;

  cin>>a;
  c=a;

  while(count--){
    if(palindromic(c)){
      cout<<c<<output1<<endl;
      return 0;
    }else{
      b=a;
      reverse(b.begin(),b.end());
      c=addStr(a,b);
      cout<< a << " + " <<b<<" = "<<c<<endl;
      a=c;
    }
  }
  cout<<output2<<endl;

}
