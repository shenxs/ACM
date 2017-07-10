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
long gcd(long a,long b){
  if(b) while((a%=b)&&(b%=a));
  return a+b;
}
struct fraction{
  long numerator;//分子
  long denominator;//分母
  fraction(long n,long d){
    long temp=gcd(n,d);
    if(temp!=0){
      numerator=n/temp;denominator=d/temp;
    }else{
      numerator=n;
      denominator=d;
    }
  }
};
fraction operator+(fraction &a,fraction &b){
  long nu=a.numerator*b.denominator+b.numerator*a.denominator;
  long de=a.denominator*b.denominator;
  fraction f(nu,de);
  return f;
}
fraction operator-(fraction &a,fraction &b){
  long nu=a.numerator*b.denominator-b.numerator*a.denominator;
  long de=a.denominator*b.denominator;
  fraction f(nu,de);
  return f;
}
fraction operator*(fraction &a,fraction &b){
  long de=a.denominator*b.denominator;
  long nu=a.numerator*b.numerator;
  fraction f(nu,de);
  return f;
}
fraction operator/(fraction &a,fraction &b){
  long nu=a.numerator*b.denominator;
  long de=a.denominator*b.numerator;
  fraction f(nu,de);
  return f;
}
ostream& operator<<(ostream& cout, fraction f){
  if(f.denominator==0){
    cout<<"Inf";
  }else{
    long nu=f.numerator;
    long de=f.denominator;
    long k;
    if(de!=0)
      k=nu/de;
    else
      k=0;
    nu-=k*de;
    if(nu*de<0||k<0){//有括号的情况
      cout<<"(";
      if(k!=0){
        cout<<k;
        if(de!=1){
          cout<<" "<<abs(nu)<<"/"<<abs(de)<<")";
        }else{
          cout<<")";
        }
      }else{
        cout<<"-"<<abs(nu)<<"/"<<abs(de)<<")";
      }
    }else if(k==0){//0或者假分数
      if(nu==0){
        cout<<0;
      }else{
        cout<<nu<<"/"<<de;
      }
    }else if(k>=1){
      if(de!=1){
        cout<<k<<" "<<nu<<"/"<<de;
      }else{
        cout<<k;
      }
    }
  }
}
int main()
{
  long a,b,c,d;
  char x;
  cin>>a>>x>>b>>c>>x>>d;
  fraction f1(a,b);
  fraction f2(c,d);
  cout<<f1<<" + "<<f2<<" = "<<f1+f2<<endl;
  cout<<f1<<" - "<<f2<<" = "<<f1-f2<<endl;
  cout<<f1<<" * "<<f2<<" = "<<f1*f2<<endl;
  cout<<f1<<" / "<<f2<<" = "<<f1/f2<<endl;
  return 0;
}
