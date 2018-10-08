#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

class Student{
public:
  int doid;
  string name;
  int height;
  int weight;
  Student(){}
  void display(){
    cout<<std::setfill('0')<<std::setw(6)<<doid<<" "<<name<<" "<<height<<" "<<weight<<endl;
  }
};
bool Less(const Student &s1,const Student &s2){
  if(s1.doid==s2.doid){
    return s1.height>s2.height;
  }else{
    return s1.doid<s2.doid;
  }
}

int main(){
  Student *ss;
  int n;
  cin>>n;
  ss=new Student[n];
  for(int i=0;i<n;i++){
    cin>>ss[i].doid>>ss[i].name>>ss[i].height>>ss[i].weight;
  }

  sort(ss,ss+n,Less);
  int predoid=-1;
  for(int i=0;i<n;i++){
    if(predoid!=ss[i].doid){
      ss[i].display();
    }
    predoid=ss[i].doid;
  }
}
