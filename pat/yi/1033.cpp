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
#include<map>
#include<functional>
using namespace std;

function<bool (char)> generator(char x){
  if(x=='+'){
    return [&](char c) -> bool{
      return c>='A'&&c<='Z';
    };
  }else if(x>='A' &&x<='Z'){
    return [x](char c) -> bool{
      return c==x||(c+('A'-'a'))==x;
    };
  }else{
    return [x](char c)->bool{
      return x==c;
    };
  }
};

int main()
{

  string a ,b;
  getline(cin, a);//a有可能为空
  cin>>b;
  int lena=a.length();
  int lenb=b.length();
  if(lena==0){
    cout<<b<<endl;
    return 0;
  }
  function<bool (char)> filters[200];
  for (int i=0; i<lena; i++) {
    filters[i]=generator(a[i]);
  }
  for (int i=0; i<lena; i++) {
    for (int k=0; k<lenb; k++) {
      if(filters[i](b[k]))
        b[k]='#';
    }
  }
  for (int i=0; i<lenb; i++) {
    if(b[i]!='#')
      cout<<b[i];
  }
  cout<<endl;
  return 0;
}
