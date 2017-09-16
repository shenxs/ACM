#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	vector<int>v;
	int a,b,c,d;
	while (cin>>a>>b>>c>>d)
	{
		v.push_back(abs((d-b)*(c-a)));
	}
	sort(v.begin(),v.end());
	for (int i=0;i<v.size();i++) cout<<v[i]<<endl;
	return 0;
}
