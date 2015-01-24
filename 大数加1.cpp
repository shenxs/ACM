#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	string a,b;
	for(;cin>>n&&n!=0;)
	{	
		cin>>a;
		for(;n>1;n--)
		{
			cin>>b;
			int x=a.size()-1;
			int y=b.size()-1;
			int temp=y;	
			string s;
			if(x<y) temp=x;
			char d='0';
			int xx=x;
			int yy=y;
			for(;temp>=0;temp--)
			{
				char c;
				c=a[x]-'0'+b[y]-'0'+d-'0';
				if(c>10)
				{
					c=c-10+'0';
                    d='1';
				}
				else if(c<10)
				{
					c=c+'0';
					d='0';
				}
				else if(c==10)
				{
					c='0';
					d='1';
				}
				s+=c;
				x--;
				y--;
			}
			int sum=yy-xx;
			char x1;
			if(sum>0)
			{
				for(;sum>0;sum--)
				{
					x1=b[sum-1];
					if(d=='1') 
					{
						x1=x1+d-'0';
					}
					else d='0';
					if(x1>'9' && sum!=1) s+='0';
					else if(x1<='9') 
					{
						s+=x1;
						d='0';
					}
					else if(x1>'9' && sum==1) s+="01";
				}	
			}
			else if(sum<0)
			{
				sum=xx-yy;
				for(;sum>0;sum--)
				{
					x1=a[sum-1];
					if(d=='1') 
					{
						x1=x1+d-'0';
					}
				    if(x1>'9' && sum!=1) s+='0';
					else if(x1<='9') 
					{
						s+=x1;
						d='0';
					}
					else if(x1>'9' && sum==1) s+="01";
				}	
			}
			else if(sum==0)
			{
				if(d=='1') s+=d;
			}
			reverse(s.begin(),s.end());
			a=s;	
		}
		cout<<a<<endl;
	}
	return 0;
}


