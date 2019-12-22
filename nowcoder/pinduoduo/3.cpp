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
#include<time.h>
using namespace std;

int main()
{
  //随机选择
  char c ;
  vector<int> socket;

  cin>>c;
  while(c!='}'){
    int temp;
    cin>>temp;
    socket.push_back(temp);
    cin>>c;
  }
  int d;cin>>d;

  // for(auto i: socket){
  //   cout<<i<<endl;
  // }

  int sum=0;int all=socket.size();

  int N=0;
  for(int i=0;i<all;i++){
    for(int j=i+1;j<all;j++){
      if(abs(socket[i]-socket[j])<d){
        sum++;
      }
      N++;
    }
  }
  double gl =sum*1.0/N;
  cout<<std::fixed<<std::setprecision(6)<<gl<<endl;
  return 0;
}
