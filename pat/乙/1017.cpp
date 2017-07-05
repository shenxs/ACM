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
//实现A除以B  半个大整数除法

void coutVector(vector<int> a){
  vector<int>::iterator it=a.begin();
  bool flag=false;

  if(a.size()==1 && a[1]==0){
    cout<<0;
  }

  while(it!=a.end()){
    if ((*it)!=0) {
      flag=true;
      cout<<*it;
    }else{
      if(flag){
        cout<<'0';
      }
    }
    it++;
  }
}


int main()
{
  vector<int> beichu;
  char c;
  c=getchar();
  while(c>='0' && c<='9'){
    beichu.push_back(c-'0');
    c=getchar();
  }
  int chushu;
  cin>>chushu;

  int yu=0;
  vector<int> shang;
  vector<int>::iterator it;
  for (it=beichu.begin(); it!=beichu.end(); it++) {
    int temp=(yu*10+(*it))/chushu;
    yu=(yu*10+(*it))%chushu;
    shang.push_back(temp);
  }
  coutVector(shang);

  cout<<" "<<yu<<endl;

  return 0;
}
