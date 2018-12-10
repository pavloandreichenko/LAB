#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    char d;
    int p = 1, mod;
    setlocale(LC_ALL, "Ukrainian");
    cout<<"-----------------------\n";
    while (p = 1)
    {
            cout << " Виберiть кiлькiсть елментiв прикладу\n";
            cin >> mod;
            cout<<"-----------------------\n";
        if (mod == 1) {
            cout<<" Введiть приклад\n";
            cin >> a >> d;
            cout<<"-----------------------\n";
            cout << a << " " << d << " " << " = ";
        }
        else if (mod == 2) {
            cout<<" Введiть приклад\n";
            cin >> a >> d >> b;
            cout<<"-----------------------\n";
            cout << a << " " << d << " " << b << " = ";
        }
        else if (mod!=1,mod!=2){
            cout<<" Помилка\n";
            continue;
        }
        switch(d)
        {
        case '+': c = a + b; break;
        case '-': c = a - b; break;
        case '*': c = a * b; break;
        case '/': c = a / b; break;
        case 's': c = sqrt(a); break;
        case 'm': c = fabs(a); break;
        default:
            cout<<" Неправильно\n";
            continue;
        }
       cout << c;
       cout <<"\n-----------------------\n";
    }
}
