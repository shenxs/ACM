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

struct question{
  int score;//分数
  int choose;//选项数目
  int r;//正确的选项个数
  char* correct;//正确的选项
  int wrongCount;
};

struct answer{
  int n;//回答的个数
  char * ans;//具体的回答
};

struct student{
  int score;//学生的总分
  int n;//答题数目
  answer* anses;//学生的作答
};

void initQuestion(question &q){
  int score,choose,r;
  cin>>score>>choose>>r;
  q.correct=new char[r];
  for (int i=0; i<r; i++) {
    cin>>q.correct[i];
  }
  q.choose=choose;
  q.r=r;
  q.score=score;
}
//学生和选择题的数目
void initStudent(student &s,int n){
  s.anses=new answer[n];
  for (int i=0; i<n; i++) {
    while(cin.get()!='(');
    int answer_amount;
    cin>>answer_amount;
    s.anses[i].n=answer_amount;
    s.anses[i].ans=new char[answer_amount];
    for (int j=0; j<answer_amount; j++) {
      cin>>s.anses[i].ans[j];
      // cout<<s.anses[i].ans[j]<<" ";
    }
    // cout<<endl;
  }
  s.score=0;
  s.n=n;
}

//根据问题和回答判断得分,得分或者0分
int judge(question q,answer s){
  if(q.r==s.n){//正确答案的个数和作答数目一致
    sort(s.ans,s.ans+s.n);
    for (int i=0; i<q.r; i++) {
      if(q.correct[i]!=s.ans[i])
        return 0;
    }
    return q.score;
  }else{
    return 0;
  }
}

int main()
{
  int N,M;
  cin>>N>>M;

  question *questions=new question[M];
  for (int i=0; i < M; i++) {
    initQuestion(questions[i]);
  }

  student *students=new student[N];
  for (int i = 0; i < N; i++) {
    initStudent(students[i],M);
  }

  bool flag=true;int Max=0;
  for (int i=0; i<M; i++) {
    for (int j=0; j<N; j++) {
      int score=judge(questions[i], students[j].anses[i]);
      if(score==0){
        questions[i].wrongCount++;
        if(questions[i].wrongCount>Max)
          Max=questions[i].wrongCount;
        flag=false;
      }
      students[j].score+=score;
    }
  }

  for (int i=0; i<N; i++) {
    cout<<students[i].score<<endl;
  }

  if(flag){
    cout<<"Too simple"<<endl;
  }else{
    cout<<Max<<" ";
    bool flag=true;
    for (int i=0; i<M; i++) {
      if(questions[i].wrongCount==Max){
        if(flag){
          cout<<i+1;
          flag=false;
        }else{
          cout<<" "<<i+1;
        }

      }
    }
  }
  return 0;
}
