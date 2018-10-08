#include<iostream>
using namespace std;

/* 请在这里填写答案 */
class Student{
public:
  Student(int no,int score){
    this->no=no;
    this->score=score;
	count++;
  }
  Student(const Student &ref){
    this->no=ref.no+1;
    this->score=ref.score;
	count++;
  }

  void display(){
    cout<<no<<" ";
    if(score==0){
      cout<<"Fail";
    }else{
      cout<<"Pass";
    }
    cout<<endl;
  }
  int no;
  int score;
  static int count;
};
int Student::count=0;

int main(){
  const int size=100;
  int i, N, no, score;
  Student *st[size];
  cin>>N;
  for(i=0; i<N; i++){
    cin>>no;
    if(no>0){
      cin>>score;
      st[i]=new Student(no, score);
    }
    else
      st[i]=new Student(*st[i-1]);
  }
  cout<<Student::count<<" Students"<<endl;
  for(i=0;i<N;i++) st[i]->display();
  for(i=0;i<N;i++) delete st[i];
  return 0;
}
