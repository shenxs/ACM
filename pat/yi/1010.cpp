#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
using namespace std;

int main()
{

  string str;
  while(getline(cin,str)){
    stringstream ss;
    vector<int> result;
    ss<<str;
    int a,b;
    a=b=0;
    while(ss>>a>>b){
      if(b!=0&&a!=0){
        result.push_back(a*b);
        result.push_back(b-1);
      }
    }
    if(result.size()>=2){
      cout<<result[0];
    }else{
      cout<<"0 0";
    }
    for(unsigned long i=1;i<result.size();i++){
      cout<<" "<<result[i];
    }
    cout<<endl;
  }
  return 0;
}
