#include<iostream>
using namespace std;
int vx,vy;
int x,y;
int s1,s2;
char t;
void S()
{
	s1+=vx;
	s2+=vy;
//	cout<<"s"<<endl;
}
void R()
{
	int tem1,tem2;
	tem1=vx;
	tem2=vy;
    vy=-tem1;
    vx=tem2;
    if (t=='W')t='N';
    else if (t=='N')t='E';
    else if (t=='E')t='S';
    else if (t=='S')t='W';
 //   cout<<"R"<<endl;
//    cout<<t<<endl;
}
//void R()
//{
//	int tem1,tem2;
//	tem1=vx;
//	tem2=vy;
//	vy=tem1;
//	vx=-tem2;	
//}
void fun(int a,int b)
{
	if (a<=0||b<=0) return;
	S();
	fun(a-b,b);
	R();
	fun(b-a,a);
}
int main()
{
	int n;
	cin>>n;
	int a,b;
	for (int i=1;i<=n;i++)
	{
		cin>>a>>b;
		vx=0;
		vy=1;
		s1=0;
		s2=0;
		t='N';
		fun(a,b);
		cout<<s1<<" "<<s2<<" "<<t<<endl;
	}
	return 0;
}
