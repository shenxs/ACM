#include<iostream>
#include<math.h>
#include<string>
#include<cstdlib>
#include<stdio.h>
#include<climits>
using namespace std;

bool number(char a){
  return a>='0' && a<='9';
}

bool aphabet(char a){
  return a>='a' && a<='z';
}

string n1,n2;
//将一个radix的数字转换为10进制
double trans(string s,double radix){
  double w=1;double result=0;
  for (int i=s.length()-1; i>=0; --i) {
    int n=0;
    if(number(s[i]))
      n=(s[i]-'0');
    else if(aphabet(s[i]))
      n=(s[i]-'a'+10);
    if(n>=radix)
      return -1;
    result+=n*w;
    w*=radix;
  }
  return result;
}

double brainysearch(double target, double s,double e){
  if(e>ULLONG_MAX)
    e=ULLONG_MAX;
  while(s<=e){
    double mid=floor((s+e)/2);
    double may=trans(n2, mid);
    if(may==target)
      return mid;
    else if (may>target)
      e=mid-1;
    else
      s=mid+1;
  }
  return  -1;
}
int findlow(string s){
  int max=0;
  for (unsigned int i=0; i<s.length(); i++) {
    int temp;
    if(number(s[i]))
      temp=s[i]-'0';
    else if(aphabet(s[i]))
      temp=s[i]-'a'+10;
    else
      temp=0;
    if(temp>max)
      max=temp;
  }
  return max;
}

void solve(){
  int tag ,radix;
  cin>>n1>>n2>>tag>>radix;
  if(tag==2)
    swap(n1, n2);
  double hig=trans(n1, radix);
  if(hig<0){
    cout<<"Impossible"<<endl;
    return ;
  }

  double low=findlow(n2)+1;
  int ans=brainysearch(hig,min(hig,low), max(hig, low));
  if(ans<0)
    cout<<"Impossible"<<endl;
  else
    cout<<ans<<endl;
}

int main(){
  solve();
  return 0;
}
