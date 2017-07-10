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

string week[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

bool asciiNumber(char c){
  return c>='0' &&c<'9';
}

bool asciiAlpha(char c){
  return (c>='a' && c<='z')||(c>='A' && c<= 'Z');
}

bool bigAlpa_N(char c){
  return c>='A' && c<='N';
}

int main()
{

  string input[4];
  for (int i=0; i<4; i++) {
    cin>>input[i];
  }
  unsigned  int i=0;
  for (;i < input[0].length(); i++) {
    if(input[0][i]>='A' && input[0][i]<='G'){
      if(input[0][i]==input[1][i])
        {
          break;
        }
    }
  }
  cout<<week[input[0][i]-'A']<<" ";
  i++;
  for(;i<input[0].length();i++){
    char c=input[0][i];
    char c2=input[1][i];
    if(asciiNumber(c)||bigAlpa_N(c)){
      if(c==c2){
        int n=0;
        if(asciiNumber(c))
          n=c-'0';
        else
          n=c-'A'+10;
        cout<<setw(2)<<setfill('0')<<n<<":";
        break;
      }
    }
  }
  for (i=0; i<input[2].length(); i++) {
    char c1=input[2][i];
    char c2=input[3][i];
    if(c1==c2){
      if(asciiAlpha(c1)){
        cout<<setw(2)<<setfill('0')<<i<<endl;
      }
    }
  }


  return 0;
}
