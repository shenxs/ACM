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

bool apha(char c){
  return (c>='a'&&c<='z')||(c>='A'&&c<='Z');
}

bool number(char c){
  return c>='0'&&c<='9';
}
//remove the special 
string filter(string str){
  string result="";
  int l=str.length();
  for(int i=0;i<l;i++){
    if(apha(str[i])||number(str[i])){
      result=result+str[i];
    }
  }
  return result;
}

bool cmp(char a,char b){
  int cha='A'-'a';
  if(a>='A'&&a<='Z')
    a=a-cha;
  if(b>='A'&&b<='Z')
    b=b-cha;
  return a>b;
}

//sortaString 
string sortString(string str){
  int l=str.length();
  sort(str.begin(),str.end(),cmp);
  return str;
}

int main()
{
  string str;
  while(cin>>str){
    string a=filter(str);
    string b=sortString(a);
    cout<<b<<endl;
  }
  return 0;
}
