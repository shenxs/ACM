#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int n;
  int a[5];
  cin>>n;
  while(n--){
    for(int i=0;i<5;i++){
      cin>>a[i];
    }
    int result=0;
    for(int i=0;i<5;i++){
      result+=a[i];
    }
    result%=26;
    char c=result+'a';
    cout<<c<<endl;
  }
  return 0;
}
