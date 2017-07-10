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

int team[1001];
int main()
{

  int N=0;
  while(cin>>N){
    for (int i=0; i < 1001; i++) {
      team[i]=0;
    }

    for (int i=0; i < N; i++) {
      int t=0;
      cin>>t;
      getchar();
      int rabs; cin>>rabs;
      int score=0;
      cin>>score;
      team[t]+=score;
    }

    int num,score;
    num=score=0;
    for (int i = 0; i < 1001; i++) {
      if(team[i]>score){
        num=i;
        score=team[i];
      }
    }
    cout<<num<<" "<<score<<endl;
  }
  return 0;
}
