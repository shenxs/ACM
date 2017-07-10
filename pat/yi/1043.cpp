#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
  string str;
  while(cin>>str){
    int P,A,T,e,s,t;
    P=A=T=e=s=t=0;
    for(unsigned int i=0;i<str.length();i++){
      switch(str[i]){
      case 'P':
        P++;break;
      case 'A':
        A++;break;
      case 'T':
        T++;break;
      case 'e':
        e++;break;
      case 's':
        s++;break;
      case 't':
        t++;break;
      }
    }
    while(P+A+T+e+s+t>0){
      if(P!=0){
        cout<<"P";
        P--;
      }

      if(A!=0){
        cout<<"A";
        A--;
      }

      if(T!=0){
        cout<<"T";
        T--;
      }
      if(e!=0){
        cout<<"e";
        e--;
      }
      if(s!=0){
        cout<<"s";
        s--;
      }
      if(t!=0){
        cout<<"t";
        t--;
      }
    }
    cout<<endl;
  }

  return 0;
}
