#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

int money=1500,tryAgain=1;
cout<<"You have $1,500. Every try costs $500! Your goal: $15,000"<<endl;
while(tryAgain==1||money<500){
srand(time(0)); //seed random number generator
int lottery=rand()%900+100; //random number between 100 and 999
int lotteryDigit1=lottery/100;
int lotteryDigit2=(lottery/10)%10;
int lotteryDigit3=lottery%10;

while(lotteryDigit1==lotteryDigit2||lotteryDigit2==lotteryDigit3||lotteryDigit3==lotteryDigit1){
    lottery=rand()%900+100;
    lotteryDigit1=lottery/100;
    lotteryDigit2=(lottery/10)%10;
    lotteryDigit3=lottery%10;
}

cout<<"Enter your lottery pick (three distinct digits): ";
int guess=0;// enter a guess
cin>>guess;
int guessDigit1=guess/100;
int guessDigit2=(guess/10)%10;
int guessDigit3=guess%10;

while(guessDigit1==guessDigit2||guessDigit2==guessDigit3||guessDigit3==guessDigit1){
    cout<<"Please enter your lottery pick with three distinct digits: ";
    cin>>guess;
    guessDigit1=guess/100;
    guessDigit2=(guess/10)%10;
    guessDigit3=guess%10;
}
cout<<"The lottery number is "<<lottery<<endl;
money=money-500;
if(guess==lottery){
	cout<<"Exact match: you win $10,000"<<endl;
	money=money+10000;
}
else if((guessDigit1==lotteryDigit2 && guessDigit2==lotteryDigit3 && guessDigit3==lotteryDigit1)
        || (guessDigit1==lotteryDigit2 && guessDigit2==lotteryDigit1 && guessDigit3==lotteryDigit3)
        || (guessDigit1==lotteryDigit1 && guessDigit2==lotteryDigit3 && guessDigit3==lotteryDigit2)
        || (guessDigit1==lotteryDigit3 && guessDigit2==lotteryDigit2 && guessDigit3==lotteryDigit1)
        || (guessDigit1==lotteryDigit3 && guessDigit2==lotteryDigit1 && guessDigit3==lotteryDigit2))
{
	cout<<"Match all digits: you win $3,000"<<endl;
	money=money+3000;
}
else if((guessDigit1==lotteryDigit1 && guessDigit2==lotteryDigit2)
        || (guessDigit1==lotteryDigit1 && guessDigit2==lotteryDigit3)
        || (guessDigit1==lotteryDigit1 && guessDigit3==lotteryDigit2)
        || (guessDigit1==lotteryDigit1 && guessDigit3==lotteryDigit3)
        || (guessDigit1==lotteryDigit2 && guessDigit2==lotteryDigit1)
        || (guessDigit1==lotteryDigit2 && guessDigit2==lotteryDigit3)
        || (guessDigit1==lotteryDigit2 && guessDigit3==lotteryDigit1)
        || (guessDigit1==lotteryDigit2 && guessDigit3==lotteryDigit3)
        || (guessDigit1==lotteryDigit3 && guessDigit2==lotteryDigit1)
        || (guessDigit1==lotteryDigit3 && guessDigit2==lotteryDigit2)
        || (guessDigit1==lotteryDigit3 && guessDigit3==lotteryDigit1)
        || (guessDigit1==lotteryDigit3 && guessDigit3==lotteryDigit2)
)
{
	cout<<"Match two digits: you win $2,000"<<endl;
	money=money+2000;
}
else if(guessDigit1==lotteryDigit1
|| guessDigit1==lotteryDigit2
|| guessDigit1==lotteryDigit3
|| guessDigit2==lotteryDigit1
|| guessDigit2==lotteryDigit2
|| guessDigit2==lotteryDigit3
|| guessDigit3==lotteryDigit1
|| guessDigit3==lotteryDigit2
|| guessDigit3==lotteryDigit3)
{
	cout<<"Match one digit: you win $1,000"<<endl;
	money=money+1000;
}
else{
	cout<<"Sorry, no match"<<endl;
}
cout<<"Now you have $"<<money<<"!"<<endl;
if(money>=15000){
cout<<"Congrats! You got $15,000 and beat the game!";
break;
}
cout<<"Would you like to try again? Type 1 for yes or 0 for no: ";
cin>>tryAgain;
}
return 0;
}
