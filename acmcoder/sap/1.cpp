#include<iostream>
// #include<vector>
// #include<map>
using namespace std;

int main(){

  int N;
  cin>>N;
  // map<int,int> m;
  int array[3001];
  for(int i=0;i<3001;i++){
    array[i]=0;
  }
  int maxc=0;
  for(int i=0;i<N;i++){
    int temp;
    cin>>temp;
    array[temp]++;
    if(array[temp]>maxc){
      maxc=array[temp];
    }
  }

  for(int i=0;i<3001;i++){
    if(array[i]==maxc)
    cout<<i<<" "<<maxc<<endl;
  }
  // cout<<"MACX="<<maxc<<endl;
  // for(int i=0;i<maxc;i++){
  //   cout<<array[i]<<endl;
  // }
  return 0;

}
