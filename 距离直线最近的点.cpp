#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
 double a,b,c,d,x1,y1,x,y,minx,miny,f,n,m;
 vector<int>aa;
 vector<int>bb;
 for(;cin>>n&&n!=0;)
 {           
  aa.clear();
  bb.clear();
  m=1;
  cin>>a>>b>>c>>d; 
  cin>>x1>>y1;
     aa.push_back(x1);
     bb.push_back(y1);
  f=n-1;
  for(;f--;)
  {   
   cin>>x>>y;
      if(abs(y-(b-d)/(a-c)*x-(a*d-b*c)/(a-c))<abs(y1-(b-d)/(a-c)*x1-(a*d-b*c)/(a-c)))
   {
       x1=x;
       y1=y;
    aa.clear();
    bb.clear();
             aa.push_back(x1);
             bb.push_back(y1);
    m=1;
   }
            else if(abs(y-(b-d)/(a-c)*x-(a*d-b*c)/(a-c))==abs(y1-(b-d)/(a-c)*x1-(a*d-b*c)/(a-c)))
   {
                x1=x;
       y1=y;
       aa.push_back(x1);
    bb.push_back(y1);
    m++;
   }
  }
  int z=0;
  for(;m--;z++)
  {
   cout<<aa[z]<<' '<<bb[z]<<endl;
  }
  cout<<endl;
 }
 return 0;
}