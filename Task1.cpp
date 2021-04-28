#include <iostream>//главна библиотека
#include <cstdlib>//библиотека
#include <ctime>//библиотека
using namespace std;

int main()
{
    cout << "Guess My Number Game\n\n";//на екрана излиза съдържанието в кавичките
    int x,y;
    cout<<"Enter number range : ";//потребителят избира до колко да е числото, което ще познава
    cin>>x;
    cout<<" ";
    cin>>y;
    srand(time(0)); //seed random number generator
    int num = rand() % (y-x+1) + x; // random number between 1 and 100
    int a=0,guess = 0;//нови променливи
    while (guess != num) {
        cout <<"Enter a guess between "<<x<<" and "<<y<<" :";//докато променливата guess не притежава същата стойност като num, на екрана излизаа съдържанието в кавичките
        cin >> guess;//докато променливата guess не притежава същата стойност като num, се въвежда нова стойност на guess
        a=a+1;//брои опитите за познаване на числото
        if (guess > num) {
            cout << "Too high!\n\n";//ако стойността на guess е по-голяма от тази на num, на екрана излиза, че търсеното число е по-малко от въведеното
        }
        else if (guess==0)
            {
            break;//ако се въведе 0, играта свършва
            }
        else if (guess < num)
            {
                cout << "Too low!\n\n";//ако стойността на guess е по-малка от тази на num, на екрана излиза, че търсеното число е по-голямо от въведеното
            }
        else {
            cout << "\nCorrect! You got it in with "<<a<<" tries ";//ако първите две условия не са изпълнени, то търсеното число е намерено
        }
    }

    return 0;
}
