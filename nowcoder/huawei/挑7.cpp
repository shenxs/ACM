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

int main()
{
  int n;
  while(cin>>n){
    int sum=0;
    for (auto i = 7; i <=n; i++) {
      if(i%7==0){sum++ ;continue;}

      int temp=i;
      while(temp!=0){
        if(temp%10==7){
          sum++;break;
        }else{
          temp/=10;
        }
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}
