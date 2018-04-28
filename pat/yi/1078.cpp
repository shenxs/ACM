#include<iostream>
#include<string>

int main(){
  using namespace std;
  char X;
  cin>>X;
  cin.get();
  string temp;
  getline(cin,temp);
  string result="";
  if(X=='C'){
    char c=temp[0];
    int count=1;
    for(unsigned int i=1;i<temp.length();i++){
      if(temp[i]==c){
        count++;
      }else{
        if(count==1){
          result=result+c;
        }else{
          result=result+std::to_string(count) +c;
        }
        count=1;
        c=temp[i];
      }
    }
    if(count==1){
      result=result+c;
    }else{
      result=result+std::to_string(count)+c;
    }

  }else if(X=='D'){
    int start=0,len=0;
    bool flag=true;
    for(unsigned int i=0;i<temp.length();i++){
      char x=temp[i];
      if(x>='0'&&x<='9'){//读到数字
        if(flag){
          start=i;
          len=1;
          flag=false;
        }else{
          len++;
        }
      }else{//读到了字符
        if(flag){//之前没有出现数字
          result=result+temp[i];
        }else{
          int n=std::stoi(temp.substr(start, len));
          for(int j=0;j<n;j++){
            result=result+temp[i];
          }
        }
        flag=true;
      }
    }
  }else{
    //nothing
  }

  cout<<result<<endl;
  return 0;
}
