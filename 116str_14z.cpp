#include<iostream>
using namespace std;
int main()
{
int i,n,br=0;
cout<<"Molq vuvedete n, 2<n<30: ";
cin>>n;
int m[n];
if(n>=30|n<=2)
{
    cout<<"Molq vuvedete drugo chislo n, 2<n<30!";
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
    if(m[i]%2==0){
        br=br+1;
    }
}
if(br==0)
{
    cout<<"V redicata nqma chetni chisla.";
}
else
{
    cout<<"V redicata ima "<<br<<" chetni chisla.";
}
}
return 0;
}
