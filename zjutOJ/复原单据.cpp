#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	for (int i=0;i<100;i++)
	{
		if ((10047+100*i)%57==0||(10047+100*i)%67==0)
		{
			cout<<10047+100*i<<endl;
			sum++;
		}
	}
	cout<<sum<<endl;

	return 0;
}