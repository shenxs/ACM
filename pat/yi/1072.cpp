#include<iostream>
#include<string>
using namespace std;

int N,M;
string x[6];

bool isthatok(string n){
  for (int i=0; i<M; i++) {
    if(x[i]==n)
      return false;
  }
  return true;
}

int main(){
  cin>>N>>M;
  int stus=0;//有问题的学生数目
  int items=0;//查出的物品数目
  for (int i=0; i<M; ++i) {
    cin>>x[i];
  }
  while(N--){
    bool flag=0;
    string name;
    cin>>name;
    int p;
    cin>>p;
    while(p--){
      string temp;
      cin>>temp;
      if(!isthatok(temp)){
        if(flag==0)
          cout<<name<<":";
        cout<<" "<<temp;
        items++;
        flag=1;
      }
    }
    if(flag){
      stus++;
      cout<<"\n";
    }
  }
  cout<<stus<<" "<<items;
  return 0;
}
