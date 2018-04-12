#include<iostream>
#include<iomanip>
using namespace std;

int round(float x){
  if(x-(int)x >= 0.5)
    return (int) (x+0.5f);
  else
    return (int)x;
}

int main(){
  int N,M;
  cin>>N>>M;
  for(int i=0;i<N;i++){
    int G2=0, min=M+1,max=-1;
    cin>>G2;
    int count=0,sum=0;
    for(int j=0;j<N-1;j++){
      int temp;
      cin>>temp;
      if(temp>=0&&temp<=M){
        count++;sum+=temp;
        if(temp<min)
          min=temp;
        if(temp>max)
          max=temp;
      }
    }
    sum-=(min+max);
    float G1=sum*1.0/(count-2);
    // cout<<"同学平均"<<G1<<endl;;
    float result=(G1+G2)/2;
    cout<<round(result)<<endl;
  }
}
