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
using namespace std;

const int len=100010;
int primes[len];
int point=0;
bool isPrime(long n){
  if(n<=1)
    return false;

  for (int i=2; i<=sqrt(n); i++) {
    if(n%i==0)
      return false;
  }
  return true;
}

int main()
{
  for(long i=0;i<len;i++){
    if(isPrime(i)){
      primes[point]=i;
      point++;
    }
  }
  int N;
  cin>>N;
  int count=0;
  int i=0;
  while(primes[i+1]<=N){
    if(primes[i+1]-primes[i]==2){
      count++;
      // cout<<primes[i+1]<<" "<<primes[i]<<endl;
    }
    i++;
  }
  cout<<count<<endl;
  return 0;
}
