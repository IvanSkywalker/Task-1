#include<iostream>
using namespace std;
int main()
{
int i,n,ma,mi;
cout<<"Molq vuvedete n, 2<=n<=125: ";
cin>>n;
double m[n];
if(n>125|n<2)
{
    cout<<"Molq vuvedete drugo chislo n, 2<=n<=125!";
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
for(i=0;i<n;i++)
{
    if(m[i]==mi|m[i]==ma){
        if(m[i]==ma){
        cout<<mi<<" ";
        }
        if(m[i]==mi){
        cout<<ma<<" ";
        }
    }
    else{
        cout<<m[i]<<" ";
    }
}
}
return 0;
}
