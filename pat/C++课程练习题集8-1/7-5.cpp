#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    //正确
    int longestPalindrome(string s) {//所有偶数+所有(大于1的奇数-1变成偶数)+1(有奇数+1 ，没奇数不加)
        int tmp[123] = {0};//a~z 65-9 A~Z 97-122
        int res=0;
        for(int i=0; i<s.size(); i++){
            tmp[s[i]] += 1;
        }
        bool a = false;//判断是否有奇数
        for(int m=0; m<123; m++){//将所有数量为偶数的字母数量加起来
            if(tmp[m]>0 && tmp[m]%2==0)
                res += tmp[m];
            if(tmp[m]>0 && tmp[m]%2==1){//所有的奇数-1变成偶数
                a = true;
                res = res + (tmp[m]-1);
            }
        }
        return a ? res+1 : res;//有奇数+1 ，没奇数不加
    }
};
int main()
{
    Solution a;
    string s;
    cin >> s;
    // s="civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
    cout << a.longestPalindrome(s) << endl;//应该是983
    return 0;
}
