#include<iostream>
#include<string>
#include<queue>
#include<deque>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
using namespace std;

int main()
{
  int n,x;
  while(cin>>n>>x){
    deque<int> que;
    for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      que.push_back(temp);
    }
    for(int i=0;i<x;i++){
      int temp;
      temp=que.back();
      que.pop_back();
      que.push_front(temp);
    }

    bool flag=false;
    while(!que.empty()){
      int temp=que.front();
      que.pop_front();
      if(flag){
        cout<<" "<<temp;
      }else{
        cout<<temp;
        flag=true;
      }
    }
    cout<<endl;
  }
  return 0;
}
