#include<iostream>
#include<string>

using namespace std;

int main(){
  string a;
  char c;
  cin>>a>>c;

  for(int i=0;i<a.length();i++){
    if(a[i]>='A'&&a[i]<='Z'){
      a[i]-='A'-'a';
    }
  }

  if(c>='A'&&c<='Z'){
    c-='A'-'a';
  }

  int count =0;
  for(int i=0;i<a.length();i++){
    if(a[i]==c){
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}
