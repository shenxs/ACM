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

//Hello World For You
int main()
{
  string str;
  cin>>str;
  int len=str.length();
  int lines=(len+2)/3;
  int empty=len-2*lines;
  for (int i=0; i<lines; ++i) {
    cout<<str[i];
    for (int j=0; j<empty; ++j) {
      if(i<lines-1)
        cout<<" ";
      else
        cout<<str[i+j+1];
    }
    cout<<str[len-i-1]<<endl;
  }
  return 0;
}
