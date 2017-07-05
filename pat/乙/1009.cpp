#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<sstream>
using namespace std;

int main()
{
  stack<string> a;
  string str = "";
  while (getline(cin,str))
    {
      string temp;
      stringstream ss ;
      ss<<str;
      while (ss>>temp)
        {
          a.push(temp);
        }
      if(!a.empty()){
        cout<<a.top();
        a.pop();
      }
      while (!a.empty()) {
        cout <<" "<< a.top();
        a.pop();
      }
      cout << endl;
    }
  return 0;
}
