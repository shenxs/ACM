#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int n;
  while(cin>>n){
    int count=0;
    while(n!=0){
      if(n%10==4)
        count++;
      n/=10;
    }
    cout<<count<<endl;
  }
  return 0;
}
