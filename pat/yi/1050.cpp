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

struct point{
  int x,y;
  point(int x,int y){
    this->x=x;
    this->y=y;
  }

};

point r(1,0);//又
point d(0,1);//下
point l(-1,0);//左
point u(0,-1);//上
point directions[]={r,d,l,u};

int main()
{
  int N;
  cin>>N;
  int *a=new int [N];

  for (int i=0; i < N; i++) {
    cin>>a[i];
  }

  sort(a,a+N);

  int m=sqrt(N);
  while(N%m!=0){
    m++;
  }

  int n=N/m;
  if(n>m)
    swap(n,m);


  int *result=new int[n*m];
  int count_m=m-1;
  int count_n=n-1;
  int m_index=0;
  int n_index=0;
  int direction_index=0;//方向下标
  point dirextion=directions[direction_index];
  point p(0,0);

  int i=N-1;
  while(i>=0){
    result[p.x+p.y*n]=a[i];
    if(dirextion.y!=0){//上下方向
      if(m_index<count_m){//还在走
        m_index++;
      }else{//切换方向
        direction_index+=1;
        direction_index%=4;
        m_index=0;
        count_n--;
      }
    }else{//左右方向
      if(n_index<count_n){//还在走
        n_index++;
      }else{//切换方向
        direction_index+=1;
        direction_index%=4;
        n_index=0;
        count_m--;
      }
    }
    dirextion=directions[direction_index];
    p.x+=dirextion.x;
    p.y+=dirextion.y;
    i--;
  }



  //输出
  for (int i=0; i<m; i++) {
    bool flag=true;
    for (int j=0; j<n; j++) {
      if(flag){
        cout<<result[i*n+j];
        flag=false;
      }else{
        cout<<" "<<result[i*n+j];
      }
    }
    cout<<endl;
  }

  delete []a;
  delete []result;
  return 0;
}
