#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int i,int j){
  return i>j;
}

int main(){
  int n;
  int a[100],b[100];
  while(cin>>n){
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    vector<int> v_a(a,a+n);
    vector<int> v_b(b,b+n);
    sort(v_a.begin(),v_a.end());
    sort(v_b.begin(),v_b.end(),compare);
    int result=0;
    vector<int>::iterator ib=v_b.begin();
    for(vector<int>::iterator it=v_a.begin();
        it!=v_a.end();
        it++,ib++){
      result+=(*it)*(*ib);
    }
    cout<<result<<endl;
  }
}
