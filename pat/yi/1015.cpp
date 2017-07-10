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

struct student{
  long id;
  int de;
  int cai;
  student(long id,int de,int cai){
    this->id=id;
    this->de=de;
    this->cai=cai;
  }
};


vector<student> shen; //圣人
vector<student> jun;    //君子
vector<student> hao; //好人,德才兼亡但是德圣才
vector<student> yu;     //剩下的达线的人

void display(vector<student> v){
  for (unsigned long i=0; i<v.size(); i++) {
    cout<<v[i].id<<" "<<v[i].de<<" "<<v[i].cai<<endl;
  }
}
bool com(student s1,student s2){
  int sum1=s1.de+s1.cai;
  int sum2=s2.cai+s2.de;
  if(sum1==sum2){
    if(s1.de==s2.de){
      return s1.id<s2.id;
    }else{
      return s1.de>s2.de;
    }
  }else{
    return sum1>sum2;
  }
}

int main()
{
  int n;cin>>n;
  int L;cin>>L;
  int H;cin>>H;
  for (int i=0; i<n; i++) {
    long id;
    int de ,cai;
    cin>>id>>de>>cai;
    student temp(id,de,cai);
    if(de>=H&&cai>=H){
      shen.push_back(temp);
    }else if(de>=H&&cai>=L){
      jun.push_back(temp);
    }else if(de>=cai &&de>=L&&cai>=L){
      hao.push_back(temp);
    }else if (de>=L&&cai>=L){
      yu.push_back(temp);
    }
  }
  cout<<shen.size()+jun.size()+hao.size()+yu.size()<<endl;
  sort(shen.begin(),shen.end(),com);
  display(shen);
  sort(jun.begin(),jun.end(),com);
  display(jun);
  sort(hao.begin(),hao.end(),com);
  display(hao);
  sort(yu.begin(),yu.end(),com);
  display(yu);

  return 0;
}
