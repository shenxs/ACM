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

//得到组合最大的四位数
int big(int n){
  vector<int> a;
  a.push_back(n/1000);
  a.push_back((n/100)%10);
  a.push_back((n/10)%10);
  a.push_back(n%10);
  sort(a.begin(),a.end());
  int result=0;
  for (int i=3; i>-1; i--) {
    int temp=1;
    int j=i;
    while(j--)
      temp*=10;
    result +=a[i]*temp;
  }
  return result;
}
//得到组合的最小数字
int small(int n){
  vector<int> a;
  a.push_back(n/1000);
  a.push_back((n/100)%10);
  a.push_back((n/10)%10);
  a.push_back(n%10);
  sort(a.begin(),a.end());
  int result=0;
  for (int i=0 ;i<4;i++) {
    int temp=1;
    int j=3-i;
    while(j--)
      temp*=10;
    result +=a[i]*temp;
  }
  return result;
}

int main()
{

  int n;
  cin>>n;
  int b=big(n);
  int s=small(n);
  int ans;
  do{
    ans=b-s;
    if(ans==0){
      cout<<n<<" - "<<n<<" = "<<"0000"<<endl;
      break;
    }
    cout<<setw(4)<<setfill('0')<< b<<" - "
        <<setw(4)<<setfill('0')<<s<<" = "
        <<setw(4)<<setfill('0')<<ans<<endl;
    b=big(ans);
    s=small(ans);
  }while(ans!=6174&&abs(ans)<10000);
  return 0;
}
