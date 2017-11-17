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
  int in_h;
  int in_m;
  int out_h;
  int out_m;
  int sum;
};

record R[1001];
int amount;//number of records;
bool validHour(int n){
  return n>=0&&n<=23;
}
bool validMin(int n){
  return n>=0&&n<=59;
}

bool validRecord(record x){
  return validHour(x.in_h)&&validHour(x.out_h)
    &&validMin(x.out_m)&&validMin(x.out_m);
}


int main()
{
  for(int i=0;i<1001;i++){
    R[i].in_m=R[i].in_h=R[i].out_m=R[i].out_h=-1;
    R[i].sum=0;
  }
  cin>>amount;
  for(int i=0;i<amount ;i++){
    int id ;
    char c;
    int h;
    int m;
    cin>>id>>c>>h;
    char x;cin>>x;
    cin>>m;
    if(c=='E'){
          R[id].in_h=h;
          R[id].in_m=m;
    }else if(c=='L'){
        R[id].out_h=h;
        R[id].out_m=m;
        int temp=(R[id].out_h-R[id].in_h)*60+(R[id].out_m-R[id].in_m);
        if(validRecord(R[id]))
          R[id].sum+=temp;
        R[id].in_m=R[id].in_h=R[id].out_m=R[id].out_h=-1;
    }else{
      //nothing
    }
  }

  int count=0;int sum=0;
  int Max=-1;
  for(int i=1;i<1001;i++){
    if(R[i].sum!=0){
      count++;
      //int temp=(R[i].out_h-R[i].in_h)*60+(R[i].out_m-R[i].in_m);
      sum+=R[i].sum;
      if(R[i].sum>Max){
        Max=R[i].sum;
      }
    }
  }
  cout<<"avg="<<sum/count<<endl;
  cout<<"max="<<Max<<endl;
  return 0;
}
