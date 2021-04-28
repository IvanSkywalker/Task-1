#include<iostream>
using namespace std;
int main()
{
int i,n,pr=1;
cout<<"Molq vuvedete n, 2<n<40: ";
cin>>n;
int m[n];
if(n>=40|n<=2)
{
    cout<<"Molq vuvedete drugo chislo n, 2<n<40!";
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
    if(m[i]%7==0){
        pr=pr*m[i];
    }
}
if(pr==1)
{
    cout<<"No";
}
else
{
    cout<<pr;
}
}
return 0;
}
