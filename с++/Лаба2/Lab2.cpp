#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
class BankAccount
{
private:
    int cash,rahunok,a,b,c;
    string valyta;
    string name1;
    string name2;
    string name3;
public:
    void mon (int date_cash,string date_valuta ,int date_rahunok){
    cash = date_cash;
    rahunok = date_rahunok;
    valyta = date_valuta;
    }
    void inform (string date_name1,string date_name2,string date_name3){
    name1 = date_name1;
    name2 = date_name2;
    name3 = date_name3;
    }
    void adde () {
            cout << "\nВведiть на скiльки ви хочите поповнити баланс\n\n";
             cin >> b;
             cash=cash+b;
             cout << "\nОперацiя проведена успішно\n\n";
             }
    void inf (){
        cout << "\nНа вашому балансi "<< cash<<" "<< valyta <<"\n\n";
    }
    
    void out(){
     cout << "\nВведiть скiльки ви хочите зняти з балансу\n\n";
             cin >> c;
             if(c<cash){
               cash=cash-c;
               cout << "\nОперацiя проведена успiшно\n\n";
             }
             else{
            cout << "\nВи не можете зняти таку суму\n\n";
             }
    }

};
int main()
{
    int p = 1, mod,a;
    setlocale(LC_ALL, "Ukrainian");
    BankAccount Terobit;
    Terobit.inform("Oleg","Kharuk","Vasilovith");
    Terobit.mon(0,"ua",29244825509100);
    while (p = 1)
    {
 cout << " Виберiть Дiю\n";
            cout << " 1.Провiрити баланс\n";
            cout << " 2.Нарухування на баланс\n";
            cout << " 3.Списання з балансу\n";
            cin >> mod;
               if (mod == 2) {
                Terobit.adde();
               }
               if (mod == 1) {
                Terobit.inf();
               }
               if (mod == 3) {
                Terobit.out();
               }
    }
}
