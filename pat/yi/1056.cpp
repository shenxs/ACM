#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
using namespace std;

int array[10];
int main()
{

  int N;
  while(cin>>N){
    for(int i=0;i<N;i++){
      cin>>array[i];
    }
    int sum=0;
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        if(j!=i){
          sum+=array[i]*10+array[j];
        }
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}
