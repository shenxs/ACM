#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct player{
  string id;
  float distance;
};

bool myfunction(player a,player b){
  return a.distance<b.distance;
}

int main(){
  int n;cin>>n;
  int x=n;
  player* p=new player[n];
  while(n--){
    cin>>p[n].id;
    int x,y;
    cin>>x>>y;
    p[n].distance=x*x+y*y;
  }
  sort(p, p+x,myfunction);
  cout<<p[0].id<<" "<<p[x-1].id;
  return 0;
}
