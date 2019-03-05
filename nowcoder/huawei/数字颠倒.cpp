#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
  string s;
  getline(cin, s);
  std::reverse(s.begin() ,s.end());
  cout<<s<<endl;
  return 0;

}
