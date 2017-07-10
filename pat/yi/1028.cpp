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

struct people{
  string name;
  int year;
  int month;
  int day;
};

bool operator<(const people &p1, const people & p2)
{
  if(p1.year==p2.year){
    if(p1.month==p2.month){
      return  p1.day<p2.day;
    }else{
      return p1.month<p2.month;
    }
  }else{
    return p1.year<p2.year;
  }
}

void display(people x){
  cout<<x.name<<" "<<x.year<<"/"<<x.month<<"/"<<x.day<<endl;
}

const int len=100000;
people peoples[len];

int main()
{
  int n;
  cin>>n;
  for (int i=0; i<n; i++) {
    cin>>peoples[i].name;
    cin>>peoples[i].year;
    getchar();
    cin>>peoples[i].month;
    getchar();
    cin>>peoples[i].day;
  }
  sort(peoples, peoples+n);

  people start;
  start.day=5;start.month=9;start.year=1814;
  people end;
  end.day=7;end.month=9;end.year=2014;

  // if(peoples[0]<start){
  //   cout<<"yes"<<endl;
  // }
  int s,e;

  // for (int i=0; i<n; i++) {
  //   display(peoples[i]);
  // }
  for (int i=0; i<n; i++) {
    if(start<peoples[i]){
      s=i;
      break;
    }
  }
  for (int i=n-1; i>=s; i--) {
    if(peoples[i]<end){
      e=i;
      break;
    }
  }
  if(e>=s)
    cout<<e-s+1<<" "<<peoples[s].name<<" "<<peoples[e].name<<endl;
  else{
    cout<<0<<endl;
  }
  return 0;
}
