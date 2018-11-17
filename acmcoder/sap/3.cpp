#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<stack>
using namespace std;

int n,m;
bool flag=true;
string s,ss;
string regex="{<[(";
int main() {
    cin>>n;
    while(n--){
        cin>>s;
        stack<char> st ;
        for(int i=0;i<s.length();++i){
            char ch = s[i];
            if(ch=='('||ch=='<'||ch=='{'||ch=='['){
                st.push(ch);
                continue;
            }
            if(st.empty()){
                flag=false;
                break;
            }
            else if(ch==')'){
                if(st.top()!='('){
                    break;
                }
                else {
                    st.pop();
                    continue;
                }
            }
            else if(ch==']'){
                if(st.top()!='['){
                    break;
                }
                else {
                    st.pop();
                    continue;}
            }
            else if(ch=='}'){
                if(st.top()!='{'){
                    break;
                }
                else {
                    st.pop();continue;}
            }
            else if(ch=='>'){
                if(st.top()!='<'){
                    break;
                }
                else {
                    st.pop();continue;}

            }
            flag=false;
        }
        if(st.empty()&&flag)
            cout<<"TRUE\n";
        else
            cout<<"FALSE\n";

    }
}
