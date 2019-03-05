#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int *array=new int[n];
  for(int i=0;i<n;i++){
    array[i]=0;
  }
  for(int i=0;i<n;i++){
    int k,v;
    cin>>k>>v;
    array[k]+=v;
  }

  for(int i=0;i<n;i++){
    if(array[i]!=0){
      cout<<i<<" "<<array[i]<<endl;
    }
  }
  return 0;
}
