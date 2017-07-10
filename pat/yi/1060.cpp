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

const int N=100001;

int a[N]={0};

int main()
{
  int n;
  cin>>n;
  int *input=new int[n];//内存泄漏
  for (int i=0; i<n; i++) {
    cin>>input[i];
  }
  sort(input,input+n);
  if(n==0){
    cout<<0;
    return 0;
  }
  for (int i=0;i < n; i++) {
    if(input[i]>(n-i)){
      cout<<(n-i)<<endl;
      return 0;
    }
  }
  cout<<0<<endl;

  return 0;
}
