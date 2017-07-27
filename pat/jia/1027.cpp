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

//将一个十进制数字转换为16进制
string ToHex(int n){
  char aplha[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','F'};
  if(n==0)
    return "0";
  string result="";
  while(n!=0){
    int temp=n%13;
    result=aplha[temp]+result;
    n/=13;
  }
  return result;
}

int main()
{
  int in[3];
  for (int i=0; i<3; ++i) {
    cin>>in[i];
  }
  string out[3];
  for (int i=0;i < 3; ++i) {
    out[i]=ToHex(in[i]);
  }
  cout<<"#";
  for (int i=0; i<3; ++i) {
    cout<<setw(2)<<setfill('0')<<out[i];
  }
  cout<<endl;
  return 0;
}
