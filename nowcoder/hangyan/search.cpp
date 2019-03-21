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

vector<vector<int> > matrix;

//find the max tangle
int search_help(int x,int y){
  int current=0;
  while((x+current+1)<matrix.size()&&(y+current+1)<matrix[0].size()){
    int tempc=current+1;
    bool flag=true;
    for(int i=0;i<=tempc;i++){
      if(matrix[x+tempc][y+i]!=1){
        flag=false;
        break;
      }
    }
    if(flag==false){
      break;
    }

    for(int i=0;i<=tempc;i++){
      if(matrix[x+i][y+tempc]!=1){
        flag=false;
        break;
      }
    }

    if(flag==false){
      break;
    }
    current++;
  }
  return current+1;
}

int search(){
  int x=matrix[0].size();
  int y=matrix.size();

  int max=0;
  for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
      if(matrix[i][j]==1){
        int temp=search_help(i,j);
        if(temp>max){
          max=temp;
        }
      }
    }
  }
  return max*max;
}

int main()
{
  int n;cin>>n;
  if(n==0){
    cout<<0<<endl;
    return 0;
  }
  for(int i=0;i<n;i++){
    string str;
    cin>>str;
    vector<int> temp;
    for(unsigned int j=0;j<str.length();j++){
      temp.push_back(str[j]-'0');
    }
    matrix.push_back(temp);
  }
  // for(auto i:matrix){
  //   for(auto j:i){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  cout<<search()<<endl;


  return 0;
}
