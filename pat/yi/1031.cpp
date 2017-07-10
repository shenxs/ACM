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
const int ERROR=999;
int quan[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

char m[]={'1', '0', 'X' ,'9' ,'8' ,'7', '6' ,'5', '4', '3', '2'};

int char2int(char c){
  if(c>='0' and c<='9'){
    return c-'0';
  }else{
    return ERROR;
  }
}

//判断一个身份证号码是否合理
bool goodId(string id){
  if(id.length()==18){
    string head=id.substr(0, 17);
    string check=id.substr(17, 1);
    // cout<<head<<" "<<check<<endl;
    int sum=0;
    for (unsigned int i=0; i<head.length(); i++) {
      if(char2int(head[i])==ERROR)
        return false;
      sum+=quan[i]*char2int(head[i]);
    }
    int yu=sum%11;
    if(m[yu]==check[0]){
      return true;
    }else{
      return false;
    }
  }else{
    return false;
  }
}


int main()
{
  int n;
  cin>>n;
  bool flag=true;
  while (n--) {
    string temp;
    cin>>temp;
    if(!goodId(temp)){
      cout<<temp<<endl;
      flag=false;
    }
  }


  if(flag){
    cout<<"All passed"<<endl;
  }

  return 0;
}
