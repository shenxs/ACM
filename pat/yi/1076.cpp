#include<iostream>
using namespace std;


int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int k=0;k<4;k++){
      char option;
      char temp;
      cin>>option>>temp>>temp;
      if(temp=='T')
        cout<<option-'A'+1;
    }
  }

  return 0;
}
