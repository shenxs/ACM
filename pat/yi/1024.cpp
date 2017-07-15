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
using namespace std;

int main()
{
  char f;//正负符号
  int z;//整数部分
  string xiao;//小数部分
  int zhi;;//指数
  char c;//字符;
  while(cin>>f>>z>>c){
    xiao="";
    while(cin>>c&&c!='E'){
      xiao=xiao+c;
    }
    cin>>zhi;
    // cout<<f<<z<<"."<<xiao<<"E"<<zhi<<endl;
    if(f=='-')
      cout<<f;

    string full=(char)(z+'0')+xiao;
    // cout<<full<<endl;
    if(zhi<0){
      cout<<"0.";
      for(int i=0;i<abs(zhi)-1;i++)
        cout<<"0";
      cout<<full;
      cout<<endl;
    }else if(zhi==0){
      cout<<z<<'.'<<xiao<<endl;
    }else{
      int len=xiao.length();
      if(len>zhi){//需要小数点
        if(z!=0){//整数部分不为0
          cout<<z;
          cout<<xiao.substr(0, zhi);
          cout<<".";
          cout<<xiao.substr(zhi, len);
        }else{//整数部分为0
          bool flag=true;
          int i=0;
          for (; i < zhi; i++) {
            if(flag){
              if(xiao[i]!='0'){
                cout<<xiao[i];
                flag=false;
              }
            }else{
              cout<<xiao[i];
            }
          }
          cout<<".";
          for (; i<len; i++) {
            cout<<xiao[i];
          }
        }

      }else{//需要补0
        if(z!=0){
          cout<<z<<xiao;
          for (int i=0; i<zhi-len; i++) {
            cout<<"0";
          }
        }else{
          bool flag=true;
          for (int i=0; i<len; i++) {
            if(flag){
              if(xiao[i]!='0'){
                cout<<xiao[i];
                flag=false;
              }
            }else{
              cout<<xiao[i];
            }
          }
          for (int i=0; i<zhi-len; i++) {
            cout<<"0";
          }
        }
      }
      cout<<endl;
    }
  }
  return 0;
}
