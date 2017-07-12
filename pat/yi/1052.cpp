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


vector<string> symbols[3];


//卖个萌
int main()
{

  string inputs[3];
  string temp;
  for(auto &i:inputs){
    getline(cin, i);
  }

  int index=0;
  for(auto i:inputs){
    unsigned long s,e;
    s=0;
    while(s<i.length()){
      if(i[s]=='['){
        e=s+1;
        while(e<i.length()){
          if(i[e]==']'){
            symbols[index].push_back(i.substr(s+1, e-s-1));
            break;
          }
          e++;
        }
      }
      s++;
    }
    index++;
  }

  int n;
  cin>>n;
  for (int i=0; i<n; i++) {
    unsigned long face[5];
    for (int k=0; k<5; k++) {
      cin>>face[k];
    }


    if(face[0]>symbols[0].size()||
       face[4]>symbols[0].size()||
       face[1]>symbols[1].size()||
       face[3]>symbols[1].size()||
       face[2]>symbols[2].size())
      {
        cout<<"Are you kidding me? @\\/@"<<endl;
      }else if(face[0]*face[1]*face[2]*face[3]*face[4]<=0){
      cout<<"Are you kidding me? @\\/@"<<endl;
    }else{
      cout<<symbols[0][face[0]-1]
          <<"("
          <<symbols[1][face[1]-1]
          <<symbols[2][face[2]-1]
          <<symbols[1][face[3]-1]
          <<")"
          <<symbols[0][face[4]-1]<<endl;
    }
  }
  return 0;
}
