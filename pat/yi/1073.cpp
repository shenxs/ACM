#include<iostream>
#include<iomanip>

using namespace std;

int N,M;

struct Question{
  //分数,选项数量,正确选项数量
  int score,chooseNumber,rightChooseNumber;
  bool rightChoose[5]={false};
  int chooseCount[5]={0};//出错时记录错误信息

  Question(){}
  Question(int score,int chooseNumber,int rightchooseNumber){
    this->score=score;
    this->chooseNumber=chooseNumber;
    this->rightChooseNumber=rightchooseNumber;
  }
  int GetScore(){return score;}
  int GetRightChooseNumber(){return rightChooseNumber;}
  void SetAsRight(int n){
    rightChoose[n]=true;
  }
  bool OneOfTheRight(int n){
    if(!rightChoose[n]){
      chooseCount[n]++;
    }
    return rightChoose[n];
  }
};
int main()
{
  cin>>N>>M;
  Question* question=new Question[M];//题目们
  float* score=new float[N]{0.0};//学生的得分
  for(int i=0;i<M;i++){
    int s,c,r;
    cin>>s>>c>>r;
    question[i]=Question(s,c,r);
    char choose;
    for(int j=0;j<r;j++){
      cin>>choose;
      question[i].SetAsRight(choose-'a');
    }
  }

  int WrongMax=0;//错误的次数
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      char temp;
      int answerCount;
      cin>>temp>>answerCount;
      int rightCount=0;bool wrongAnswer=false;bool looseAnswer=false;
      bool answer[5]={false};
      for(int k=0;k<answerCount;k++){
        cin>>temp;
        answer[temp-'a']=true;
      }
      for(int k=0;k<question[j].chooseNumber;k++){
        if(answer[k]==question[j].rightChoose[k]){ //正确
          rightCount++;
        }else if(answer[k]==true){//错选
          wrongAnswer=true;
          question[j].chooseCount[k]++;
          WrongMax++;
        }else{//漏选
          looseAnswer=true;
          question[j].chooseCount[k]++;
        }
      }
      cin>>temp;
      if(!wrongAnswer){
        if(looseAnswer){
          score[i]+=(float)question[j].GetScore()/2.0;
        }else if(rightCount==question[j].chooseNumber){
          score[i]+=(float)question[j].GetScore();
        }else{
          cout<<"error"<<endl;
        }
      }
    }
  }

  for(int i=0;i<N;i++){
    cout<<fixed;
    cout<<setprecision(1)<<score[i]<<endl;
  }
  if(WrongMax==0){
    cout<<"Too simple";
  }else{
    int max=0;
    for(int i=0;i<M;i++){
      for(int j=0;j<question[i].chooseNumber;j++){
        if(question[i].chooseCount[j]>max){
          max=question[i].chooseCount[j];
        }
      }
    }
    for(int i=0;i<M;i++){
      for(int j=0;j<question[i].chooseNumber;j++){
        if(question[i].chooseCount[j]==max){
          cout<<max<<" "<<i+1<<"-"<<(char)('a'+j)<<endl;
        }
      }
    }

  }

  delete  [] question;
  delete  [] score;
  return 0;
}
