#include<iostream>
#include<string>
using namespace std;

int main(){

  string s;
  getline(cin,s);
  int sum=0;
  int a[128]={0};
  for(int i=0;i<s.length();i++){
    if(s[i]>=0&&s[i]<=127){
      a[s[i]-0]++;
    }
  }
  for(auto i:a){
    if(i!=0)
      sum++;
  }
  cout<<sum<<endl;
  return 0;
}
