#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
  string str;
  while(getline( cin,str)){
    std::reverse(str.begin(), str.end());
    cout<<str<<endl;
  }
  return 0;
}
