#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand(time(0));
int a,num=rand()%3;
cout<<"Kamuk, nojica, hartiq"<<endl;//Rock_Paper_Scissor
cout<<"Molq vuvedete 0 za nojica, 1 za kamuk ili 2 za hartiq: ";
cin>>a;
if(num==0){
    if(a==0){
    cout<<"Komputurut e nojica. Vie ste nojica sushto. Ravenstvo.";
    }
    else if(a==1){
    cout<<"Komputurut e nojica. Vie ste kamuk. Vie pobedihte!";
    }
    else if(a==2){
    cout<<"Komputurut e nojica. Vie ste hartiq. Komputurut pobedi!";
    }
}
if(num==1){
    if(a==0){
    cout<<"Komputurut e kamuk. Vie ste nojica. Komputurut pobedi!";
    }
    else if(a==1){
    cout<<"Komputurut e kamuk. Vie sushto ste kamuk. Ravenstvo";
    }
    else if(a==2){
    cout<<"Komputurut e kamuk. Vie ste hartiq. Vie pobedihte!";
    }
}
if(num==2){
    if(a==0){
    cout<<"Komputurut e hartiq. Vie ste nojica. Vie pobedihte!";
    }
    else if(a==1){
    cout<<"Komputurut e hartiq. Vie ste kamuk. Komputurut pobedi!";
    }
    else if(a==2){
    cout<<"Komputurut e hartiq. Vie ste hartiq sushto. Ravenstvo.";
    }
}
return 0;
}
