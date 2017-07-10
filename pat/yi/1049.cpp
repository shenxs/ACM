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

  long long n;
  double sum=0.0;
  cin>>n;
  for (int i=0; i<n; i++) {
    double temp;
    cin>>temp;
    sum+=temp*(i+1)*(n-i);
  }
  cout<<fixed<<setprecision(2)<<sum<<endl;
  return 0;
}
