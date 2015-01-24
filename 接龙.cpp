/*Description:
扑克牌接龙游戏中，若手中有一张正好能接在桌面上的那条“龙”的这一端或那一端的牌，便能成功出牌，否则便遭惩罚，直至最终认输。扑克牌的牌张为：A,2,3,4,5,6,7,8,9,10,J,Q,K。其中，接龙规则A不能接在K后面，只能接在2前面。例如，桌面上有一条“小龙”789，手上有一张10的牌，则这张牌因为正好跟在龙的9后面，所以便能成功打出去。你的任务是判断手中这张牌能否接住桌上的那条龙。

Input:
一些数据组，每组数据包括两个字串，表示桌面上的一条龙和手中一张牌，第一个字串（龙）是由扑克牌的牌张构成。第二个字串（手中的牌）是扑克牌的某一牌张。
Output:
对应每组数据，若判明能接住龙，则输出Yes，否则输出No。
Sample Input:

789 10

Sample Output:

Yes
*/
#include<iostream>
#include<string>
using namespace std;
int doubidawu(char a)
{
	int s;
	switch(a)
	{
	case 'A' :s=1;break;
	case'1':
	case'0':s=10;break;
	case'J':s=11;break;
	case'Q':s=12;break;
	case'K':s=13;break;
        default:s=a-48;
	}
	return s;
}
int main()
{
	string s,k;
	int a,b,c;
	while(cin>>s>>k)
	{
		a=doubidawu(s[0]);
		b=doubidawu(s[s.length()-1]);
		c=doubidawu(k[0]);
		if (c==a-1||c==b+1)
		{cout<<"Yes"<<endl;continue;}
		cout<<"No"<<endl;
	}
	return 0;


}
