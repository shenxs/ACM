#include <iostream>
#include<time.h>
#include<string>
using namespace std;
int main() {

    long long loop=(1<<30);
    long long a=1,b=2;
    clock_t start,end;
    start=clock();
    for (int i=0; i<loop; i++) {
        a=a+1;
    }
    end=clock();
    cout<<(double)(end-start)/CLOCKS_PER_SEC<<endl;

}
