#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"Vuvedete broq na bukvite: ";
cin>>n;
char m[n];
for(i=0;i<n;i++)
    {
    cin>>m[i];
    }
int br=0;
for(i=0;i<n;i++)
{
    if(m[i]=='a'){
        br++;
        }
}
cout<<"br="<<br;
return 0;
}
