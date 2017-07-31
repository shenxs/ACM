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
  cin>>n;
  int * post=new int [n];
  int * in=new int [n];
  for (int i=0; i<n; ++i) {
    cin>>post[i];
  }
  for (int i=0; i<n; ++i) {
    cin>>in[i];
  }



  delete [] post;
  delete [] in;
  return 0;
}
