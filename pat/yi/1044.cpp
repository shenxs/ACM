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
string ge[] = {"tret", "jan", "feb", "mar", "apr", "may", "jun",
               "jly",  "aug", "sep", "oct", "nov", "dec"};
string shi[] = {"tam", "hel", "maa", "huh", "tou", "kes",
                "hei", "elo", "syy", "lok", "mer", "jou"};
//判断是否是地球的数字
bool earth(string x){
  if(x!=""){
    return x[0]>='0' && x[0]<='9';
  }
  return false;
}
//将string转换为int
int toNumber(string x){
  int wei=1;
  int sum=0;
  for (int i=x.length()-1; i>=0; i--) {
    int temp=(int)(x[i]-'0')*wei;
    sum+=temp;
    wei*=10;
  }
  return sum;
}
//将x转换为火星数字
string earth2Mar(string x){
  int num=toNumber(x);
  if(num==0)
    return ge[0];
  int g=num%13;
  num/=13;
  string result="";
  if(g==0){
    return shi[num-1];
  }
  result= result+ge[g];
  if(num){
    result=shi[num-1]+" "+result;
  }
  return result;
}
//将火星文字转换为地球文字
string mar2earth(string x){
  int sum=0;
  size_t p=x.find_first_of(' ');
  if(p!=std::string::npos){//两位数
    string x1=x.substr(0, p);
    string x2=x.substr(p+1, x.length()-p-1);
    // cout<<x1<<" "<<x2<<endl;
    for(int i=0;i<13;i++){
      if(ge[i]==x2)
        sum+=i;
    }
    for(int i=0;i<12;i++){
      if(shi[i]==x1)
        sum+=(i+1)*13;
    }
    return std::to_string(sum);
  }else{//一位数字
    for (int i=0; i<12; i++) {
      if(shi[i]==x){
        sum+=(i+1)*13;
      }
    }
    for(int i=0;i<13;i++){
      if(ge[i]==x)
        sum+=i;
    }
    return to_string(sum);
  }
}
string convert(string x){
  if(earth(x)){
    return earth2Mar(x);
  }else{
    return mar2earth(x);
  }
}

string inputs[100];
int main() {
  int n;
  cin>>n;
  cin.get();
  for (int i=0; i<n; i++) {
    getline(cin,inputs[i]);
    string temp=convert(inputs[i]);
    cout<<temp<<endl;
  }


  return 0;
}
