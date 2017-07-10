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
//对多行为n一共多少字符
int fun(int n){
  int result=0;
  result=1+(3+n)*((n-3)/2+1);
  return result;
}

//对于输入的数字得到最多行的字符串的个数
int getN(int x){
  int n=1;
  while(fun(n)<=x){
    n+=2;
  }
  return n-2;

}

int fun2(int i,int n){
  return -abs(i-(n-1)/2)+(n-1)/2;
}

int fun3(int i,int n){
  return 2*abs(i-(n-1)/2)+1;
}
int main()
{

  int x;
  char c;
  while(cin>>x>>c){
    int n=getN(x);
    for (int i=0; i<n; i++) {
      for(int k=0;k<fun2(i,n);k++){
        cout<<" ";
      }
      for(int k=0;k<fun3(i,n);k++){
        cout<<c;
      }
      // for(int k=0;k<fun2(i,n);k++){
      //   cout<<" ";
      // }
      cout<<endl;
    }
    cout<<x-fun(n)<<endl;
  }
  return 0;
}
