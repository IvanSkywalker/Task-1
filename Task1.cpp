#include <iostream>//������ ����������
#include <cstdlib>//����������
#include <ctime>//����������
using namespace std;

int main()
{
    int b;
    cout<<"Enter number range : ";//������������ ������ �� ����� �� � �������, ����� �� �������
    cin>>b;
    srand(time(0)); //seed random number generator
    int num = rand() % b + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n";//�� ������ ������ ������������ � ���������

    int a=0,guess = 0;//���� ����������
    while (guess != num) {
        cout << "Enter a guess between 1 and 100 : ";//������ ������������ guess �� ��������� ������ �������� ���� num, �� ������ ������� ������������ � ���������
        cin >> guess;//������ ������������ guess �� ��������� ������ �������� ���� num, �� ������� ���� �������� �� guess
        a=a+1;//���� ������� �� ��������� �� �������
        if (guess > num) {
            cout << "Too high!\n\n";//��� ���������� �� guess � ��-������ �� ���� �� num, �� ������ ������, �� ��������� ����� � ��-����� �� ����������
        }
        else if (guess==0)
            {
            break;//��� �� ������ 0, ������ �������
            }
        else if (guess < num)
            {
                cout << "Too low!\n\n";//��� ���������� �� guess � ��-����� �� ���� �� num, �� ������ ������, �� ��������� ����� � ��-������ �� ����������
            }
        else {
            cout << "\nCorrect! You got it in with "<<a<<" tries ";//��� ������� ��� ������� �� �� ���������, �� ��������� ����� � ��������
        }
    }

    return 0;
}
