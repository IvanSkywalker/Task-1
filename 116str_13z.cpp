#include<iostream>
using namespace std;
int main()
{
int i,n,x;
cout<<"Molq vuvedete n, 1<n<36: ";
cin>>n;
int m[n];
if(n>=36|n<=1)
{
    cout<<"Molq vuvedete drugo chislo n, 1<n<36!";
}
else
{
cout<<"Molq vudedete redicata ot chisla: ";
for(i=0;i<n;i++)
{
    cin>>m[i];
}
cout<<"Molq vuvedete x: ";
cin>>x;
for(i=0;i<n;i++)
{
    if(m[i]==x){
        cout<<i+1;break;
    }
    if(i==n-1){
        cout<<"No";
    }
}
}
return 0;
}
