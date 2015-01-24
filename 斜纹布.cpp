/*Description:
按要求输出一些斜纹布似的字符方块。斜纹布总是每一行的第一个字符出现在下一行的最后一个字符上，而第二个字符出现在下一行的第一个字符上，第三行字符出现在下一行的第二个字符上，等等。形成上下行的错位显示。

Input:
一些无空格间隔的字串。
Output:
对应每个字串，输出第一行字符即为输入字串的“斜纹布”字符正方形。每块斜纹布之间空一行，最上与最下不空行。
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
