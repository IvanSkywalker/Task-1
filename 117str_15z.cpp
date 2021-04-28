#include<iostream>
using namespace std;
int main()
{
int i,n,br=0;
cout<<"Molq vuvedete n, 2<n<25: ";
cin>>n;
double m[n],sb=0;
if(n>=25|n<=2)
{
    cout<<"Molq vuvedete drugo chislo n, 2<n<25!";
}
else
{
cout<<"Molq vudedete redicata ot chisla: ";
for(i=0;i<n;i++)
{
    cin>>m[i];
}
for(i=0;i<n;i++)
{
    if(m[i]>0){
        sb=sb+m[i];
        br=br+1;
    }
}
if(br==0)
{
    cout<<"V redicata nqma polojitelni chisla!";
}
else
{
    cout<<sb/br;
}
}
return 0;
}
