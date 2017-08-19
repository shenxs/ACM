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

struct record{
  int start_h,start_m,start_s,
    end_h,end_m,end_s;
  string id;

};

bool compStart(record r1,record r2){
  if(r1.start_h==r2.start_h){
    if(r1.start_m==r2.start_m)
      return r1.start_s<r2.start_s;
    else
      return r1.start_m<r2.start_m;
  }else{
    return r1.start_h<r2.start_h;
  }
}

bool compSecond(record r1,record r2){
  if(r1.end_h==r2.end_h){
    if(r1.end_m==r2.end_m)
      return r1.end_s<r2.end_s;
    else
      return r1.end_m<r2.end_m;
  }else{
    return r1.end_h<r2.end_h;
  }
}

int main()
{
  int m;
  cin>>m;
  record *arry=new record[m];
  for (int i=0; i<m; ++i) {
    char gbg;
    cin>>arry[i].id>>arry[i].start_h
       >>gbg>>arry[i].start_m>>gbg>>arry[i].start_s
       >>arry[i].end_h>>gbg>>arry[i].end_m>>gbg>>arry[i].end_s;
  }
  sort(arry, arry+m,compStart);
  cout<<arry[0].id<<" ";
  sort(arry,arry+m,compSecond);
  cout<<arry[m-1].id;

  return 0;
}
