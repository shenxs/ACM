#include<iostream>
#include<string>
#include<cstddef>   //std::size_t
using namespace std;
 
int main()
{
    string str;
    while(cin>>str){
        pair<int,int> point(0,0);               //point.first point.second
        size_t found = str.find_first_of(';');  //找到第一个';'的位置
        int start = 0;
 
        while(found!=string::npos){
            string s1 = str.substr(start,found-start);
            //cout << s1 << endl;
            start = found+1;
            found = str.find_first_of(';',found+1);
 
            if(s1.size()>1 && s1.size()<=3){    //合法的字符个数：2或3
                char c = s1[0];
                int n = 0;
                int invalid = 0;    //数字为是否非法
                for(int i=1; i<s1.size(); ++i){ //数字位判断与提取，A1A
                    if(s1[i]>='0'&&s1[i]<='9')
                        n = n*10 + (s1[i]-'0');
                    else{
                        invalid=1;
                        break;
                    }
                }
                if(invalid==0){
                    switch(c)
                    {
                        case 'A': {point.first-=n;break;}
                        case 'D': {point.first+=n;break;}
                        case 'W': {point.second+=n;break;}
                        case 'S': {point.second-=n;break;}
                    }
                }
 
            }
        }
        cout << point.first << ',' << point.second <<endl;
    }
    return 0;
}
