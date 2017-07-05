#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

struct student{
  string name;
  string id;
  int score;
  bool operator < (const student& b) const{
    return score<b.score;
  }
};

void printStudent(student s){
  cout<<s.name<<" "<<s.id<<endl;
}
student s[10000];
int main()
{
  int n;
  while(cin>>n){
    if(n<=0){
      continue;
    }
    for(int i=0;i<n;i++){
      cin>>s[i].name>>s[i].id>>s[i].score;
    }
    sort(s,s+n);
    printStudent(s[n-1]);
    printStudent(s[0]);
  }
  return 0;
}
