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

//实现得太垃圾了
struct record{
  int win;
  int tie;//平局
  int lose;
  int b,c,j;//布锤剪赢的次数
  void init(){
    win=tie=lose=b=c=j=0;
  }
};

char getMax(record r){

  int MAX=max(max(r.b,r.c),r.j);
  if(MAX==r.b){
    return 'B';
  }else if(MAX==r.c){
    return 'C';
  }else{
    return 'J';
  }
}

int main()
{

  int n;
  cin>>n;
  record x,y;
  string str;
  x.init();y.init();
  while(n--){
    char l,r;
    cin>>l>>r;
    if(l==r){
      x.tie+=1;
      y.tie+=1;
    }else if(l=='B' && r=='C'){ //x赢
      x.win++;x.b++;
      y.lose++;
    }else if(l=='B' && r=='J'){//x输
      x.lose++;
      y.win++;y.j++;
    }else if(l=='C' && r=='J'){
      x.win++;x.c++;
      y.lose++;
    }else if(l=='C' && r=='B'){
      x.lose++;
      y.win++;y.b++;
    }else if(l=='J' && r=='B'){
      x.win++;x.j++;
      y.lose++;
    }else if(l=='J' && r=='C'){
      x.lose++;
      y.win++;y.c++;
    }
  }

  cout<<x.win<<" "<<x.tie<<" "<<x.lose<<endl;
  cout<<y.win<<" "<<y.tie<<" "<<y.lose<<endl
  <<getMax(x)<<" "<<getMax(y)<<endl;


  return 0;
}
