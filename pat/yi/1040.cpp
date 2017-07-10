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
  string str;
  cin>>str;
  int cnt=0;
  int l=str.length();
  int countt=0;
  for (int i=0; i<l; i++) {
    if(str[i]=='T'){
      countt++;
    }
  }
  int countp=0;
  for(int i=0;i<l;i++){
    if(str[i]=='P')
      countp++;
    else if(str[i]=='T'){
      countt--;
    }else if(str[i]=='A'){
      cnt+=countp*countt;
      cnt%=1000000007;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
