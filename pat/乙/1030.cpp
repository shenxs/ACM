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

long long Array[1000000]={0};
long N;

long good(long i,long m,long p){
  if(i==N-1){
    if(Array[i]<=m*p)
      return 0;
    else
      return -1;
  }else if (i<N-1){
    if(Array[i]<=m*p){
      if(Array[i+1]>m*p)
        return 0;
      else
        return 1;
    }else{
      return -1;
    }
  }
}

//二分查找对应x对应的M的下标,不存在则返回-1
long find(long start,long end,long x,long p){
  long mid=(start+end)/2;
  long look=good(mid,x,p);
  if(look==0)//正好
    return mid;
  else if(start==end)
    return -1;
  else if(look==-1){//太大
    return find(start,mid,x,p);
  }else if(look==1){//太小
    return find(mid,end,x,p);
  }
}

int main()
{
  cin>>N;
  long p;cin>>p;
  for (long i=0; i<N; i++) {
    cin>>Array[i];
  }
  sort(Array,Array+N);
  long MAX=0;
  for (long i = 0; i < N; i++) {
    if(MAX+i>=N)
      break;
    long index_M=find(i,N,Array[i],p);
    if(index_M-i+1>MAX){
      MAX=index_M-i+1;
      // cout<<Array[i]<<" "<<Array[index_M]<<endl;
    }
  }
  cout<<MAX<<endl;
  return 0;
}
