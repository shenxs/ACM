/*Description:
�˿��ƽ�����Ϸ�У���������һ�������ܽ��������ϵ���������������һ�˻���һ�˵��ƣ����ܳɹ����ƣ��������ͷ���ֱ���������䡣�˿��Ƶ�����Ϊ��A,2,3,4,5,6,7,8,9,10,J,Q,K�����У���������A���ܽ���K���棬ֻ�ܽ���2ǰ�档���磬��������һ����С����789��������һ��10���ƣ�����������Ϊ���ø�������9���棬���Ա��ܳɹ����ȥ������������ж������������ܷ��ס���ϵ���������

Input:
һЩ�����飬ÿ�����ݰ��������ִ�����ʾ�����ϵ�һ����������һ���ƣ���һ���ִ������������˿��Ƶ����Ź��ɡ��ڶ����ִ������е��ƣ����˿��Ƶ�ĳһ���š�
Output:
��Ӧÿ�����ݣ��������ܽ�ס���������Yes���������No��
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
