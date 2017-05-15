#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
  int n;
  std::cin>>n;
  for (int i = 0; i < n; i++) {
    int k;
    cin>>k;
    int j=1;
    for ( j=1; j<k/2; j++) {
      std::cout<<2*j-1<<" ";
    }
    cout<<2*j-1<<endl;
    for ( j=1; j<k/2; j++) {
      std::cout<<2*j<<" ";
    }
    cout<<2*j<<endl;
  }
  return 0;
}

