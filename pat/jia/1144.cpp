#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  bool flag[100005]={false};
  int min=0;
  flag[min]=true;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    if(temp>0 && temp< 100005){
      flag[temp]=true;
      while(flag[min+1]){
        min+=1;
      }
    }
  }
  cout<<min+1<<endl;
  return 0;
}
