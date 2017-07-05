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

  int n;
  while(cin>>n){
    double *a =new double [n];
    for (int i=0; i<n; i++) {
      cin>>a[i];
    }
    //排序;
    sort(a,a+n);
    for (int i=0; i<n-1; i++) {
      a[i+1]=(a[i]+a[i+1])/2;
    }
    cout<<floor(a[n-1])<<endl;
    delete []a;
  }
  return 0;
}
