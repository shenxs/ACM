#include<iostream>
using namespace std;
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};

class CPU{
public:
  CPU_Rank Rank;
  int frequency;
  double voltage;
  CPU(CPU_Rank r=P1,int f=2,double v=100){
    cout<<"create a CPU!"<<endl;
    Rank=r;
    frequency=f;
    voltage=v;
  }
  CPU(const CPU &ref){
    cout<<"copy create a CPU!"<<endl;
    Rank=ref.Rank;
    frequency=ref.frequency;
    voltage=ref.voltage;
  }
  ~CPU(){
    cout<<"destruct a CPU!"<<endl;
  }
  void showinfo(){
	cout<<"rank:"<<Rank<<endl
        <<"frequency:"<<frequency<<endl
        <<"voltage:"<<voltage<<endl;
  }



};
int main()
{
  CPU a(P6,3,300);

  cout<<"cpu a's parameter"<<endl;
  a.showinfo(); //显示性能参数

  CPU b;
  cout<<"cpu b's parameter"<<endl;
  b.showinfo(); //显示性能参数

  CPU c(a);
  cout<<"cpu c's parameter"<<endl;
  c.showinfo(); //显示性能参数
}
