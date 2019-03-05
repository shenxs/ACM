#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

  int array[1000];

  int n=0;
  while(cin>>n){
    for(int i=0;i<n;i++){
      cin>>array[i];
    }

    std::sort(array, array+n);

    int last=-1;
    for (int i = 0;  i < n; ++ i) {
      if(array[i]!=last){
        cout<<array[i]<<endl;
        last=array[i];
      }
    }

  }
  return 0;
}
