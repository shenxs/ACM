#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
  int n;
  cin>>n;
  string *array=new string[n];
  for (auto i = 0; i < n; ++i) {
    cin>>array[i];
  }

  std::sort(array, array+n);
  for (auto i =0 ; i < n; ++i) {
    cout<<array[i]<<endl;
  }


  delete [] array;
  return 0;
}
