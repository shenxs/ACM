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
using namespace std;

//将i以n进制数输出
void toN(int i,int n){
  if(i==0){
    cout<<i<<endl;
  }else{
    string temp="";
    while(i!=0){
      int x=i%n;
      char c=x+'0';
      temp=c+temp;
      i/=n;
    }
    cout<<temp<<endl;
  }
}


int main()
{

  int a,b;
  cin>>a>>b;
  int d;
  cin>>d;
  toN(a+b,d);
  return 0;
}
