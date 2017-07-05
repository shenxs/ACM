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

int n;//学生数量
int m;//判题数量
int point[100];
int Right[100];
int answer[100][100];

int main()
{
  while (cin>>n>>m) {
    //输入分值;
    for (int i = 0; i<m; i++) {
      cin>>point[i];
    }
    //输入正确答案
    for (int i=0; i<m; i++) {
      cin>>Right[i];
    }
    //输入学生答案
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
        cin>>answer[i][j];
      }
    }
    for (int i=0; i<n; i++) {
      int score=0;
      for (int j=0; j<m; j++) {

        if(Right[j]==answer[i][j])
          score+=point[j];
      }
      cout<<score<<endl;
    }
  }
  return 0;
}
