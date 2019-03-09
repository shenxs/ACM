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
  int N,m;
  cin>>N>>m;
  int *v=new int [m];
  int *p=new int [m];
  int *q=new int [m];

  for (auto i = 0; i < m; ++i) {
    cin>>v[i]>>p[i]>>q[i];
  }

  delete []v;
  delete []p;
  delete []q;
  return 0;
}
