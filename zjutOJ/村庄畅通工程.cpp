#include<iostream>
using namespace std;
struct xinxi{
    int ca;
    int cb;
    int w;
};
int main(){
    int n,m;
    while(cin>>n>>m&&n!=0)
    {
        xinxi*a=new xinxi [n];
        int leave=m;//ʣ��δ����ͨ��
        int*c=new int [m+1];//��¼�Ƿ��ѱ���ͨ
        for(int i=0;i<=m;i++){
            c[i]=-1;
        }
        for(int i=0;i<n;i++){
            cin>>a[i].ca>>a[i].cb>>a[i].w;
        }//input
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i].w>a[j].w)
                {
                    swap(a[i].ca,a[j].ca);
                    swap(a[i].cb,a[j].cb);
                    swap(a[i].w,a[j].w);
                }
            }
        }//sort
        int cost=a[0].w;
        c[a[0].ca]=c[a[0].cb]=a[0].ca;
        int bian=1;
        for(int i=0;i<n;i++)
        {
            if((c[a[i].ca]!=c[a[i].cb])||((c[a[i].ca]==-1)&&(c[a[i].cb]==-1)))//����ͬһ�����鼯��
            {
                cost+=a[i].w;bian++;int temp=c[a[i].cb];cout<<bian<<' '<<cost<<endl;
                for(int j=1;j<=m;j++)
                {
                    if(c[j]==temp)
                    {
                        c[j]=a[i].ca;
                    }
                }
            }
        }

        if(bian==m-1)
            cout<<cost<<endl;
        else
            cout<<'?'<<endl;
        delete []a;
        delete []c;
    }
    return 0;
}
