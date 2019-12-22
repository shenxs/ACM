#define mem(a,x) memset(a,x,sizeof(a))
#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<stack>
#include<queue>
#include<iomanip>
#include<map>
#include<climits>
using namespace std;

int arr[100005];
int main()
{
  int n,k;
  cin>>n>>k;

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  std::sort(arr, arr+n);


  int sum=0;
  int i=0;
  while(k>0&& i<n){
    if(arr[n-1]==sum){
      cout<<0<<endl;
      k--;
      continue;
    }

    if(sum!=arr[i]){
      cout<<arr[i]-sum<<endl;
      sum=arr[i];
      k--;
    }else{
      
    }
    i++;
  }

  return 0;
}
