#define mem(a,x) memset(a,x,sizeof(a))
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
  int p1[4],p2[4],y[4];
  for(int i=0;i<4;i++){
    cin>>p1[i];
    getchar();
  }

  for(int i=0;i<4;i++){
    cin>>p2[i];
    getchar();
  }

  for(int i=0;i<4;i++){
    cin>>y[i];
    getchar();
  }

  int result[4];
  int flag=true;

  for(int i=0;i<4;i++){
    result[i]=p1[i]&y[i];
    int temp=p2[i]&y[i];
    if(flag){
      if(temp!=result[i]){
        flag=false;
      }
    }
  }


  if(flag){
    cout<<"1 ";
  }else{
    cout<<"0 ";
  }
  cout<<result[0];
  for(int i=1;i<4;i++){
    cout<<"."<<result[i];
  }
  cout<<endl;


  // for(int i=0;i<4;i++){
  //   cout<<p1[i]<<endl;
  // }
  // for(int i=0;i<4;i++){
  //   cout<<p2[i]<<endl;
  // }
  // for(int i=0;i<4;i++){
  //   cout<<y[i]<<endl;
  // }
 
  return 0;
}
