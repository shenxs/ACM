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

//ascii字符出现次数统计
int ascii[128];

int main()
{

  for (int i = 0; i < 128; i++) {
    ascii[i]=0;
  }
  string str;
  getline(cin,str);
  for (unsigned int i=0; i < str.length(); i++) {
    if(str[i]>='A'&&str[i]<='Z'){
      ascii[str[i]-('A'-'a')]++;
    }else{
      ascii[str[i]+0]++;
    }
  }
  int MAX=0;int n=0;
  for (int i='a'; i<='z'; i++) {
    if (ascii[i]>MAX) {
      n=i;
      MAX=ascii[i];
    }
  }
  char c=n;
  cout<<c<<" "<<MAX<<endl;
  return 0;
}
