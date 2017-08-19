#include<iostream>
using namespace std;

int main()
{
  int k;
  int arry[10005]={0};
  cin>>k;
  bool flag=false;
  for (int i=0; i<k; ++i) {
    cin>>arry[i];
    if(arry[i]>=0)
      flag=true;
  }
  if(!flag){//全部是负数
    cout<<"0 "<<arry[0]<<" "<<arry[k-1];
    return 0;
  }
  int sum=-1;
  int start,end;
  int temp=0;
  start=arry[0];
  int left=arry[0];
  for (int i=0; i<k; ++i) {
    temp=arry[i]+temp;
    if(temp>sum){
      sum=temp;
      start=left;
      end=arry[i];
    }else if(temp<0){
      temp=0;
      left=arry[i+1];
    }
  }
  cout<<sum<<" "<<start<<" "<<end<<endl;
  return 0;
}
