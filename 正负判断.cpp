#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n;
  while(cin>>n){
    if(n>=0)
      cout<<"positive"<<endl;
    else
      cout<<"negative"<<endl;
  }
  return 0;
}
