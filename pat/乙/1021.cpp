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

int a[10];

int main()
{
  string str;
  while(cin>>str){
    for (int i = 0; i<10; i++) {
      a[i]=0;
    }

    for (unsigned int i=0;i<str.length();i++){
      a[str[i]-'0']++;
    }
    for (int i = 0; i<10; i++) {
      if(a[i]!=0){
        cout<<i<<":"<<a[i]<<endl;
      }
    }
  }

  return 0;
}
