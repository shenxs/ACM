#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
using namespace std;

int array[1000]; //数组
int n;//上限

//能被5整除的所有的偶数的和
void a1(){
  int sum=0;
  for(int i=0;i<n;i++){
    if(array[i]%5==0 and array[i]%2==0){
      sum+=array[i];
    }
  }
  if(sum==0){
    cout<<"N ";
  }else{
    cout<<sum<<" ";
  }
}

//余1的数字交错求和
void a2(){
  int d=-1;
  bool flag=false;
  int sum=0;
  for(int i=0;i<n;i++){
    if(array[i]%5==1){
      d*=-1;
      sum+=d*array[i];
      flag=true;
    }
  }
  if(!flag){
    cout<<"N ";
  }else{
    cout<<sum<<" ";
  }
}

//余2的个数
void a3(){
  int count=0;
  for(int i=0;i<n;i++){
    if(array[i]%5==2){
      count++;
    }
  }
  if(count==0){
    cout<<"N ";
  }else{
    cout<<count<<" ";
  }
}


//余2的个数
void a4(){
  int sum=0;
  int count=0;
  for(int i=0;i<n;i++){
    if(array[i]%5==3){
      count++;
      sum+=array[i];
    }
  }
  if(count==0){
    cout<<"N ";
  }else{
    double average=sum*1.0/count;
    cout.flags(ios::fixed);
    cout.precision(1);
    cout<<average<<" ";
  }
}

void a5(){
  int max=0;
  for(int i=0;i<n;i++){
    if(array[i]%5==4){
      if(array[i]>max){
        max=array[i];
      }
    }
  }
  if(max!=0){
    cout<<max<<endl;
  }else{
    cout<<"N"<<endl;
  }
}


int main()
{
  while(cin>>n){
    for(int i=0;i<n;i++){
      cin>>array[i];
    }
    a1();
    a2();
    a3();
    a4();
    a5();
  }

  return 0;
}
