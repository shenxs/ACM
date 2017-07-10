#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

string pinyin[10]={
  "ling", "yi","er","san","si","wu","liu","qi","ba","jiu"
};
int main()
{
  string input;
  while(cin>>input){
    int sum=0;
    for(int i=0;i<input.length();i++){
      sum+=input[i]-'0';
    }
    string sumStr=std::to_string(sum);
    string result="";
    result+=pinyin[sumStr[0]-'0'];
    for(int i=1;i<sumStr.length();i++){
      result+=" ";
      result+=pinyin[sumStr[i]-'0'];
    }
    cout<<result<<endl;
  }
  return 0;
}
