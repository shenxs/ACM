#define mem(a,x) memset(a,x,sizeof(a))
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
#include<climits>
using namespace std;

int main()
{
  int n;
  vector<int> v;
  cin>>n;
  for(int i=0;i<n;i++){
    int temp;cin>>temp;
    v.push_back(temp);
  }
  std::sort(v.begin(), v.end() );

  vector<int> half;
  for(int i=0;i<n/2;i++){
    half.push_back(v[i]+v[n-1-i]);
  }
  sort(half.begin(),half.end());
  cout<<half[n/2-1]-half[0]<<endl;

  return 0;
}
