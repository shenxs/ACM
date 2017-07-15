#include <algorithm>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

struct man {
  string name;
  int hight;
};

bool operator<(man m1, man m2) {
  if (m1.hight == m2.hight) {
    return m1.name > m2.name;
  } else {
    return m1.hight < m2.hight;
  }
}

int main() {
  int N, K;
  cin >> N >> K;
  int aLine = N / K;
  man *m = new man[N];
  for (int i = 0; i < N; i++) {
    cin >> m[i].name >> m[i].hight;
  }
  sort(m, m + N);

  int mid = N;

  int row = K - 1;
  bool flag = true;
  int lastLine = N - aLine * (K - 1);
  for (int i = 1; i <= lastLine / 2; i++){
    if (flag) {
      cout << m[mid - lastLine + i * 2 - 2].name;
      flag = false;
    } else {
      cout << " " << m[mid - lastLine + i * 2 - 2].name;
    }
  }
  if(flag)
    cout<<m[mid-1].name;
  else
    cout<<" "<<m[mid-1].name;
  for (int i=mid-2-1; i >=mid- 2*(lastLine/2 -1)-1; i-=2) {
    cout<<" "<<m[i].name;
  }
  cout<<endl;

  while(row){
    flag=true;
    mid=row*aLine;
    for (int i=mid-(aLine/2)*2+1; i < mid; i+=2) {
      if(flag){
        cout<<m[i-1].name;
        flag=false;
      }else{
        cout<<" "<<m[i-1].name;
      }
    }
    if(flag)
      cout<<m[mid-1].name;
    else
      cout<<" "<<m[mid-1].name;
    for (int i=mid-2; i >=mid-2*(aLine/2); i-=2) {
      if(flag){
        cout<<m[i-1].name;
        flag=false;
      }else{
        cout<<" "<<m[i-1].name;
      }
    }
    cout<<endl;
    row--;
  }
  delete[] m;
  return 0;
}
