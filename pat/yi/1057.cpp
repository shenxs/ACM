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

//如果是字母得到其顺序
int getN(char c){
  if(c>='a' and c<='z'){
    return c-'a'+1;
  }else if (c>='A' and c<='Z'){
    return c-'A'+1;
  }else{
    return 0;
  }
}


int main()
{

  string str;
  getline(cin,str);

  long long sum=0;
  for (unsigned int i=0; i<str.length();i++) {
    sum+=getN(str[i]);
  }

  int zeroCount=0;
  int oneCount=0;
  while(sum!=0){
    if((sum&1)==1)
      oneCount++;
    else
      zeroCount++;
    sum=sum>>1;
  }
  cout<<zeroCount<<" "<<oneCount<<endl;
  return 0;
}
