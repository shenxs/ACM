#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
#include<iomanip>
using namespace std;

bool allA(string str){
  for (unsigned int i=0;i < str.length(); i++) {
    if (str[i]!='A') {
      return false;
    }
  }
  return true;
}

int main()
{

  int n;
  cin>>n;
  while (n--) {
    string temp;
    cin>>temp;
    // cout<<temp<<endl;
    unsigned long p_P=temp.find_first_of('P');
    unsigned long p_T=temp.find_first_of('T');

    if(p_P!=std::string::npos &&
       p_T!=std::string::npos &&
       p_T>p_P){
      string a=temp.substr(0, p_P);
      string b=temp.substr(p_P+1, p_T-p_P-1);
      string c=temp.substr(p_T+1, temp.length()-p_T);
      // cout<<a<<" "<<b<<" "<<c<<endl;
      // cout<<p_P<<" "<<p_T<<endl;
      if(allA(a)&&allA(b)&&allA(c)){
        if(b.length()>=1){
          if(a.length()*b.length()==c.length()){
            cout<<"YES"<<endl;
          }else{
            cout<<"NO"<<endl;
          }
        }else{
          cout<<"NO"<<endl;
        }
      }else{
        cout<<"NO"<<endl;
      }}else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
