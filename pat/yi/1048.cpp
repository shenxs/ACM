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


char arr[]={'0','1','2','3','4','5','6','7',
            '8','9','J','Q','K'};

char ji(char a,char b){
  int index=a+b-2*'0';
  index%=13;
  return arr[index];
}
char ou(char a,char b){
  int x=b-a;
  if(x<0)
    x+=10;
  char c=x+'0';
  return c;
}
int main()
{
  string A,B;
  cin>>A>>B;
  string result="";
  bool hi=true;
  int a,b;
  a=A.length()-1;
  b=B.length()-1;

  while(a>=0||b>=0){
    char c1,c2;
    if(a>=0)
      c1=A[a];
    else
      c1='0';
    if(b>=0)
      c2=B[b];
    else
      c2='0';
    if(hi){
      result=ji(c1,c2)+result;
    }else{
      result=ou(c1,c2)+result;
    }
    hi=!hi;
    if(a+1) a--;
    if(b+1) b--;
  }
  cout<<result<<endl;

  return 0;
}
