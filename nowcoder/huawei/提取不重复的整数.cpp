#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string s;
  cin>>s;
  std::reverse(s.begin(), s.end());
  bool flag[10]={false};
  for(int i=0;i<s.length();i++){
    if(flag[s[i]-'0']==false){
      flag[s[i]-'0']=true;
      cout<<s[i];
    }
  }
  cout<<endl;
  return 0;
}
