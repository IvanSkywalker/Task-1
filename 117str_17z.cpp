#include<iostream>
using namespace std;
int main()
{
int i,n,d=0,e=0,x=0;
//"e" е максималният елемент в масива
//"d" е индексът на първото срещане на "e" в редицата
//"x" са останалите индекси на срещане на "e" в редицата
cout<<"Molq vuvedete n, 2<=n<=100: ";
cin>>n;
int m[n];
if(n>100|n<2)
{
    cout<<"Molq vuvedete drugo chislo n, 2<=n<=100!";
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
    if(m[i]>e){
        e=m[i];
        d=i;
    }
}
cout<<"max:"<<e<<" index:"<<d;
for(i=0;i<n;i++)
{
    if(m[i]==e){
        if(d!=i){
            x=i;
            cout<<","<<x;
        }
    }
}
}
return 0;
}
