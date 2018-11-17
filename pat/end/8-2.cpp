#include<iostream>

using namespace std;


//硬件产品
class AbstracProductA{
};

//软件产品
class AbstracProductB{
};

class AbstractFactory{
  virtual AbstracProductA* create_productA(int productid){};

  virtual AbstracProductB* create_productB(int productid){};
};

class printer:public AbstracProductA{
};

class coper:public AbstracProductA{
};


class bankcard :public AbstracProductB{

};

class idCard:public AbstracProductB{

};

class driveCard:public AbstracProductB{

};

class HardwareFactor : public AbstractFactory{

  virtual AbstracProductA* create_productA(int n){
    if(n==1)
      return new printer;
    else if(n==2)
      return new coper;
  };
};

class SofterWareFactor:public AbstracProductB{

  virtual AbstracProductB* create_productB(int n){
    if(n==1){
      return new bankcard;
    }else if(n==2){
      return new idCard;
    }else if(n==3){
      return new driveCard;
    }
  };

};

int main(){
  return 0;
}
