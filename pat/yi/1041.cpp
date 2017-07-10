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

struct info{
  string id;
  int first;
  int real;
};

int n;
info Array[1000];
void displayInfoOf(int target){
  for (int i = 0; i < n;i++) {
    if(Array[i].first==target){
      cout<<Array[i].id<<" "<<Array[i].real<<endl;
      return ;
    }
  }
}

int main()
{

  while (cin>>n) {
    for (int i=0; i<n; i++) {
      cin>>Array[i].id>>Array[i].first>>Array[i].real;
    }
    int m;
    cin>>m;
    while(m--){
      int temp;
      cin>>temp;
      displayInfoOf(temp);
    }
  }

  return 0;
}
