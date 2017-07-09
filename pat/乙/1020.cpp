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

struct mooncake{
  double amount;
  double price;
  double x;
  void calcu(){
    this->x=this->price/(this->amount*1.0);
  }
};

bool operator<(mooncake & c1,mooncake &c2){
  return c1.x<c2.x;
}

mooncake mooncakes[1000];
int main()
{
  int N,D;
  cin>>N>>D;
  for (int i=0; i < N; i++) {
    cin>>mooncakes[i].amount;
  }
  for (int i=0; i < N; i++) {
    cin>>mooncakes[i].price;
  }
  for (int i=0; i < N; i++) {
    mooncakes[i].calcu();
  }
  sort(mooncakes, mooncakes+N);

  double shouyi=0.0;
  int point=N-1;
  while(D>0 && point>=0){
    if(mooncakes[point].amount<=D){
      D-=mooncakes[point].amount;
      shouyi+=mooncakes[point].price;
    }else{
      shouyi+=mooncakes[point].x*D;
      D=0;
    }
    point--;
  }
  cout<<fixed<<setprecision(2)<<shouyi<<endl;
  return 0;
}
