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
  string address;
  int data;
  string next;
};

int main()
{
  string firstAddress;
  int N,K;//总共N个node,反转K
  cin>>firstAddress>>N>>K;
  vector<node> MassList;
  for (int i=0; i<N; i++) {
    node temp;
    cin>>temp.address>>temp.data>>temp.next;
  }

  return 0;
}
