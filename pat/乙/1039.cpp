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
    int noExitCount=0;//计算有多少珠子不在
    for (unsigned int i=0; i<b.length(); i++) {
      std::size_t found=a.find_first_of(b[i] );
      if (found!=std::string::npos) {
        a.erase(found, 1);
      }else{
        noExitCount++;
      }
    }
    if(noExitCount==0){
      cout<<"Yes "<<a.length()<<endl;
    }else{
      cout<<"No "<<noExitCount<<endl;
    }
  }
  return 0;
}
