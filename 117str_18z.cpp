#include<iostream>
using namespace std;
int main()
{
int i,n,ma,mi;
cout<<"Molq vuvedete n, 2<=n<=15: ";
cin>>n;
double m[n];
if(n>15|n<2)
{
    cout<<"Molq vuvedete drugo chislo n, 2<=n<=15!";
}
else
{
cout<<"Molq vudedete redicata ot chisla: ";
for(i=0;i<n;i++)
{
    cin>>m[i];
}
ma=m[0];
mi=m[0];
for(i=0;i<n;i++)
{
    if(m[i]>ma){
        ma=m[i];
    }
    if(m[i]<mi){
        mi=m[i];
    }
}
cout<<ma*mi<<" "<<ma-mi;
}
return 0;
}
