#include<iostream>
#include<string>
using namespace std;


int hexctoi(char c){
  if(c>='0'&&c<='9'){
    return c-'0';
  }else if(c>='A'&&c<='F'){
    return c-'A'+10;
  }else{
    return -1;
  }
}

long long Hex2D(string i){
  if(i.length()<=2)
    return 0;
  i=i.substr(2, i.length());
  long long sum=0;
  for(int j=i.length()-1;j>=0;j--){
    int b=i.length()-j;
    int temp=hexctoi(i[j]);
    int sl=1;
    for(int k=0;k<b-1;k++){
      sl*=16;
    }
    // cout<<temp <<"  "<<sl<<endl;
    sum+=temp*sl;
  }
  return sum;
}


int main(){
  string i;
  while(cin>>i){
    cout<<Hex2D(i)<<endl;
  }
}
