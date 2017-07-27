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

int N;

struct student{
  string name;
  string id;
  int grade;
};

bool operator<(student s1,student s2){
  return s1.grade<s2.grade;
}

int main()
{
  cin>>N;
  student * stu=new student[N];
  for (int i=0; i<N; ++i) {
    cin>>stu[i].name>>stu[i].id>>stu[i].grade;
  }
  int g1,g2;
  cin>>g1>>g2;
  if(g1>g2)
    swap(g1,g2);
  sort(stu,stu+N);
  bool flag=false;

  for (int i=N-1; i>=0; i--) {
    if(stu[i].grade>=g1 &&
       stu[i].grade<=g2){
      cout<<stu[i].name<<" "<<stu[i].id<<endl;
      flag=true;
    }else if(stu[i].grade<g1){
      break;
    }
  }
  if(!flag){
    cout<<"NONE"<<endl;
  }


  delete  [] stu;
  return 0;
}
