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

struct node{
  int left;
  int right;
};

vector<node> tree;
vector<int> arr;
vector<int> realtree;
int N;
void buildTree(int root){
  static int index=0;
  if(root==-1 or root>N)
    return;
  buildTree(tree[root].left);
  realtree[root]=arr[index];
  index++;
  buildTree(tree[root].right);
}

void travall(int i){
  if(tree[i].left!=-1)
    travall(tree[i].left);
}

int main()
{

  cin>>N;
  tree.resize(N);
  arr.resize(N);
  realtree.resize(N);
  for (int i=0; i < N; ++i) {
    cin>>tree[i].left>>tree[i].right;
  }
  for (int i=0; i < N; ++i) {
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  queue<int> que;
  buildTree(0);

  que.push(0);
  bool flag=true;
  while(!que.empty()){
    if(flag){
    cout<<realtree[que.front()];
    flag=false;
    }else{
      cout<<" "<<realtree[que.front()];
    }
    int front=que.front();
    que.pop();
    if(tree[front].left!=-1){
      que.push(tree[front].left);
    }
    if(tree[front].right!=-1){
      que.push(tree[front].right);
    }
  }

  return 0;
}
