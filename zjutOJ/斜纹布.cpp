/*Description:
��Ҫ�����һЩб�Ʋ��Ƶ��ַ����顣б�Ʋ�����ÿһ�еĵ�һ���ַ���������һ�е����һ���ַ��ϣ����ڶ����ַ���������һ�еĵ�һ���ַ��ϣ��������ַ���������һ�еĵڶ����ַ��ϣ��ȵȡ��γ������еĴ�λ��ʾ��

Input:
һЩ�޿ո������ִ���
Output:
��Ӧÿ���ִ��������һ���ַ���Ϊ�����ִ��ġ�б�Ʋ����ַ������Ρ�ÿ��б�Ʋ�֮���һ�У����������²����С�
Sample Input:

abcd
128

Sample Output:

abcd
bcda
cdab
dabc

128
281
812
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
    bool f=false;
	while (cin>>s)
	{
		if (f==true) cout<<endl;
		f=true;
		for (int line=0;line<s.length();line++)
		{
			cout<<s<<endl;
			char a;
			a=s[0];
			for (int i=0;i<s.length()-1;i++) s[i]=s[i+1];
			s[s.length()-1]=a;
		}
	}
	return 0;
}
