#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int x,y;
void go(string s){
  // cout<<s<<endl;
  if(s=="") return ;
  if(s.length()>3) return;
  char direction=s[0];
  string re_num=s.substr(1, s.length());
  std::reverse(re_num.begin(),re_num.end());
  int move=0;
  for(int i=0;i<re_num.length();i++){
    if(re_num[i]>='0'&&re_num[i]<='9'){
      int temp=re_num[i]-'0';
      for(int j=0;j<i;j++){
        temp*=10;
      }
      move+=temp;
    }else{
      return;
    }
  }
  // cout<<direction<<" "<<move<<endl;

  if(direction=='A'){
    x-=move;
  }else if(direction=='S'){
    y-=move;
  }else if(direction =='D'){
    x+=move;
  }else if(direction == 'W'){
    y+=move;
  }else{
    return;
  }
}
int main()
{
  string input;

  while(cin>>input){
    x=y=0;
    int i=0;
    int last=0;
    while(i<input.length()){
      if(input[i]==';'){
        go(input.substr(last, i-last));
        last=i+1;
      }
      i++;
    }
    cout<<x<<","<<y<<endl;
  }
  return 0;
}
