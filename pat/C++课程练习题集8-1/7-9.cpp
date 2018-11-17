#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int *a=new int[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int count=1;
  int max=1;
  for(int i=0;i<n-1;i++){
    if(a[i]<a[i+1]){
      count++;
    }else{
      max=(max>count ? max:count);
      count=1;
    }
  }
  max=(max>count ? max:count);
  if(n==0){
    cout<<0<<endl;
  }else{
    cout<<max<<endl;
  }

  delete []a;
}
