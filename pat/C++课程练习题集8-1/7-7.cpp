#include<iostream>
#include<algorithm>
using namespace std;
int a[1000];
int main(){
    int n,m=0;
    cin>>n;
    for(int i=0;i<n;++i) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;++i) {
        if(m++) cout<<" ";
        cout<<a[i];
    }
}
