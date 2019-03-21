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
using namespace std;


// struct record{
//   int n;
//   int index;
// };

// bool cmp(const record &a,const record &b){
//   return a.n<b.index;
// }

int main()
{
  int n;cin>>n;
  vector<int> v;
  int temp;
  cin>>temp;
  v.push_back(temp);
  while(cin>>temp){
    int index=0;int min=2000000000;
    for(auto i=0;i<v.size();i++){
      if(abs(v[i] -temp)<min){
        index=i+1;
        min=abs(v[i]-temp);
      }
    }
    cout<< min<<" "<<index<<endl;
    v.push_back(temp);
  }

  return 0;
}
