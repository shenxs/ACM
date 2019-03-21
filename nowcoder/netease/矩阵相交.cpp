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

struct edge{
  int l,r,h,f;
  edge(int l,int r,int h,int f){
    this->l=l;
    this->r=r;
    this->h=h;
    this->f=f;
  }
};

bool cmp(const edge &a,const edge &b){
  return a.h<b.h;
}

int main()
{
  int T;cin>>T;
  while(T--){
    int N;
    cin>>N;
    vector<edge> es;

    int redudant=0;
    for(int i=0;i<N;i++){
      int x0,y0,x1,y1;
      cin>>x0>>y0>>x1>>y1;
      es.push_back(edge(x0,x1,y0,1));
      es.push_back(edge(x0,x1,y1,-1));
      redudant+=(x1-x0)*(y1-y0);
    }
    std::sort(es.begin(), es.end(), cmp);

    for(auto i: es){
      cout<<i.l<<" "<<i.r<<" "<<i.h<<" "<<i.f<<endl;
    }
    cout<<endl;

  }
  return 0;
}
