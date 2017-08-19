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

int main()
{

  string num;
  cin>>num;
  string english[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  int sum=0;
  for (unsigned int i=0; i<num.length(); ++i) {
    sum+=num[i]-'0';
  }

  if(sum==0){
    cout<<"zero";
  }else{
    stack<int> temp;
    while(sum!=0){
      temp.push(sum%10);
      sum/=10;
    }
    int index=temp.top();
    cout<<english[index];
    temp.pop();

    while(!temp.empty()){
      index=temp.top();
      cout<<" "<<english[index];
      temp.pop();
    }
  }
  return 0;
}
