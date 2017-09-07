#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int> a,b;
  for (int i=0; i<n; ++i) {
    int temp;
    cin>>temp;
    a.push_back(temp);
    b.push_back(temp);
  }
  sort(a.begin(), a.end());

  vector<int> v;
  int max=0;
  for (int i=0; i<n; ++i) {
    if(a[i]==b[i]&&b[i]>max){
      v.push_back(a[i]);
    }
    if(b[i]>max)
      max=b[i];
  }
  cout<<v.size()<<endl;
  for (auto i:v) {
    if(i==v[0])
      cout<<i;
    else
      cout<<" "<<i;
  }
  cout<<endl;


  return 0;
}

