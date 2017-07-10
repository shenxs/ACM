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

int main()
{
  string a,b;
  while(cin>>a>>b){
    string buffer="";
    for (unsigned int i=0; i<a.length(); i++) {
      char c=a[i];
      if(b.find_first_of(c)==std::string::npos){
        if(c>='a' and c<='z'){
          c+='A'-'a';
        }
        if (buffer.find_first_of(c)==std::string::npos) {
          buffer=buffer+c;
        }
      }
    }
    cout<<buffer<<endl;
  }
  return 0;
}
