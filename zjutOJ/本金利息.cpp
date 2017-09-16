#include<iostream>

using namespace std;

int main()
{
  int n,a,m;
  while(cin>>n>>a>>m){
    double x=1.0;
    x=x+a/100.0;
    double ans=1;
    for (int i = 0; i < m; ++i) {
      ans*=x;
    }
    cout<<n*ans<<endl;
  }
  return 0;
}
