#include<iostream>

using namespace std;

int main(){
  int arrary[100];
  int n;
  while(cin>>n){
    for (int i = 0; i<n; i++) {
      cin>>arrary[i];
    }
    int m;
    cin>>m;
    bool flag=false;
    for(int i=0;i<n;i++){
      if(m==arrary[i]){
        cout<<"YES"<<endl;
        flag=true;
        break;
      }
    }
    if(flag)
      continue;
    cout<<"NO"<<endl;
  }
}
