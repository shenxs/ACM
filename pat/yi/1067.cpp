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

string passwd="";
int n;
int main()
{
  cin>>passwd>>n;
  cin.get();
  while(n--){
    string input;
    getline(cin ,input);
    if(input=="#")
      return 0 ;
    else if(input==passwd){
      cout<<"Welcome in"<<endl;
      return 0;
    }else{
      cout<<"Wrong password: "<<input<<endl;
    }
  }
  cout<<"Account locked"<<endl;
  return 0;
}
