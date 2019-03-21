#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
  int n,m,c;
  cin>>n>>m>>c;
  map<int,vector<int> > color;

  for(int i=0;i<n;i++){
    int num_i=0;cin>>num_i;
    for(int j=0;j<num_i;j++){
      int temp;cin>>temp;
      color[temp].push_back(i);
    }
  }

  int sum=0;
  for(auto &i:color){
    if(i.second.size()<=1) continue;
    int num_i=i.second.size();
    if(n-i.second[num_i-1]+i.second[0]<m){
      sum++;continue;
    }
    int a=0, b=1;
    while(b<num_i){
      if(i.second[b]-i.second[a]<m){
        sum++;
        break;
      }else{
        a++;b++;
      }
    }
  }

  cout<<sum<<endl;
  return 0;
}
