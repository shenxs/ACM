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
  int n=0;
  while(cin>>n){
    int j,y;
    j=y=0;
    int a,b,c,d;
    for(int i=0;i<n;i++){
      cin>>a>>b>>c>>d;
      if(b==(a+c) and d!=(a+c)){
        y++;
      }else if(b!=(a+c) and d==(a+c)){
        j++;
      }
    }
    cout<<j<<" "<<y<<endl;
  }
  return 0;
}
