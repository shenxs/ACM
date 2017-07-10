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

//得到a由da定义的pa
long getPn(long a,int da){
  long pa=0;
  long c=1;
  while(a!=0){
    int temp=a%10;
    if(temp==da){
      pa+=temp*c;
      c*=10;
    }
    a/=10;
  }
  return pa;
}


int main()
{
  int a,da,b,db;
  while(cin>>a>>da>>b>>db){
    cout<<getPn(a,da)+getPn(b,db)<<endl;
  }
  return 0;
}
