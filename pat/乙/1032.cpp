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

int a[100000];

int main()
{

  int n;
  cin>>n;
  for (int i=0; i<100000; i++) {
    a[i]=0;
  }
  int MAX=0;
  while(n--){
    int school,score;
    cin>>school>>score;
    if(school>MAX)
      MAX=school;
    a[school]+=score;
  }
  int index,best;
  best=0;
  for (int i=0; i<=MAX; i++) {
    if(a[i]>best){
      best=a[i];
      index=i;
    }
  }
  cout<<index<<" "<<best<<endl;
  return 0;
}
