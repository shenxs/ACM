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

vector<int> multi(vector<int> a, vector<int> b){
  std::reverse(a.begin(), a.end());
  while(!b.empty()){
    int tmp=b[b.size()-1];
    b.pop_back();
    int j=0;
    for(unsigned int i=0;i<a.size();i++){
      int re=(a[i]+j)*tmp;
      j=re/10;
      a[i]=re%10;
    }
    if(j!=0){
      a.push_back(j);
    }
  }
  std::reverse(a.begin(), a.end());
  return a;
}


int main()
{
  vector<int> numbers;
  for(int i=0;i<=9;i++){
    int temp;cin>>temp;
    numbers.push_back(temp);
  }

  vector<int> a,b;
  int la,lb;
  cin>>la>>lb;
  int current=0;
  bool flag=true;
  while(la+lb>0&&current<=9){
    if(numbers[current]>0){
      if(current==0){
        if(la>0){
          la--;
        }else{
          lb--;
        }
      }else{
        if(flag&&la>0){
          a.push_back(current);
          la--;
        }else{
          b.push_back(current);
          lb--;
        }
        flag=!flag;
      }
      numbers[current]--;

    }else{
      current++;
    }
  }
  vector<int> result= multi(a,b);
  for(auto x: result){
    cout<<x;
  }
  cout<<endl;
  return 0;
}
