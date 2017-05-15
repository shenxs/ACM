#include<iostream>
#include<string>
using namespace std;

bool equal(int a[],int b[],int n){
  for(int i=0;i<n;i++){
    if(a[i]!=b[i])
      return false;
  }
  return true;
}

void copy(int a[],int b[],int n){
  for (int i = 0; i<n; i++) {
    b[i]=a[i];
  }
}

void apply(int previous[],int rule[],int ans[], int n){
  for (int i=0; i < n; i++) {
    ans[rule[i]]=previous[i];
  }
}

int main(){
    int n;
    int target[10],rule[10];
    int original[10];int ans1[10];int ans2[10];
    string cant="impossible";
    while(cin>>n){

      bool impossible=false;
      for(int i=0;i<n;i++){
        cin>>rule[i];
      }
      for(int i=0;i<n;i++){
        cin>>target[i];
      }
      for (int i=0; i<n; i++) {
        original[i]=i;
      }
      copy(original,ans1,n);
      int count=1;
      apply(ans1,rule,ans2,n);
      copy(ans2,ans1,n);
      while(!equal(ans1,target,n)){
        if(equal(ans1,original,n)){
          cout<<cant<<endl;
          impossible=true;
          break;
        }else{
          apply(ans1,rule,ans2,n);
          copy(ans2,ans1,n);
          count++;
        }
      }
      if(impossible)
        continue;
      else
        cout<<count<<endl;
    }
}
