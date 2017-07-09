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

bool leagleDouble(double x,string str){
  //大小范围不对
  if(abs(x)>1000){
    return false;
  }
  //两位小数
  int dotindex=str.find_first_of('.');
  int l=str.length();
  if(dotindex<l&&dotindex>=0){
    if(!((l-1-dotindex)<=2)){
      return false;
    }
  }
  //数字与字符串比较
  string num=std::to_string(x);
  for (unsigned int i=0; i<str.length(); i++) {
    if(num[i]!=str[i]){
      return false;
    }
  }
  return true;
}

int main()
{
  int n,count;
  double sum=0;
  cin>>n;
  while(n--){
    string temp;cin>>temp;
    stringstream ss;ss<<temp;
    double num;ss>>num;
    if(leagleDouble(num,temp)){
      sum+=num;
      count++;
    }else{
      cout<<"ERROR: "<<temp<<" is not a legal number"<<endl;
    }
  }
  if(count==1){
    printf("The average of 1 number is %.2lf", sum);
  }else if (count>1) {
    printf("The average of %d numbers is %.2lf", count,sum/count);
  }else{
    printf("The average of 0 numbers is Undefined");
  }
  return 0;
}
