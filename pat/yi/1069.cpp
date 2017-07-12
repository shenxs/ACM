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

vector<string> zhong;

bool yizhong(string x){
  int len=zhong.size();
  for (int i=0; i<len;i++) {
    if(zhong[i]==x)
      return true;
  }
  return false;
}

int main()
{
  int m,n,s;
  cin>>m>>n>>s;
  vector<string> zhuan;
  for (int i=0;i<m; i++) {
    string temp;
    cin>>temp;
    zhuan.push_back(temp);
  }
  int amount=zhuan.size();
  while (s<=amount) {
    if(!yizhong(zhuan[s-1])){//还没有中奖
      zhong.push_back(zhuan[s-1]);
      s+=n;
    }else{//已经中奖了
      s++;
    }
  }
  if(zhong.size()==0){
    cout<<"Keep going..."<<endl;
  }else{
    for(auto i:zhong){
      cout<<i<<endl;
    }
  }
  return 0;
}
