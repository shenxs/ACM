#include<iostream>
#include<math.h>

int main(){
  using namespace std;
  int n;
  cin>>n;
  int* cha=new int[n]{0};
  for(int i=0;i<n;i++){
    int temp;cin>>temp;
    cha[abs(temp-(i+1))]++;
  }

  for(int i=n-1;i>=0;i--){
    if(cha[i]>1){
      cout<<i<<" "<<cha[i]<<endl;
    }
  }
  delete [] cha;
  return 0;
}
