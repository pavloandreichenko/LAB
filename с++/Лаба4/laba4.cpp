#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
class Human
{
private:
    int n,data1,data2,data3;
    string sex;
    string name1;
    string name2;
    string name3;
public:
  void input(){
    cout << endl <<"²ìÿ: "<< name1 <<endl;
    cout <<"Ïð³çâèùå: "<< name2 <<endl;
    cout <<"Ïî áàòüêîâ³: "<< name3 <<endl;
    cout <<"Ñòàòü: "<< sex <<endl;
    cout <<"Ð³ê íàðîäæåííÿ: "<< data1 <<"."<< data2 <<"."<< data3 <<endl;
    }
    void output(){
    if(n!=1){
    cout << "Ââåä³òü ³ìÿ\n";
    cin >> name1;
    cout << "Ââåä³òü Ïð³çâèøùå\n";
    cin >> name2;
    cout << "Ââåä³òü ïî áàòüêîâ³\n";
    cin >> name3;
    cout << "Ââåä³òü ñòàòü\n";
    cin >> sex;
    cout << "Ââåä³òü äåíü\n";
    cin >> data1;
    cout << "Ââåä³òü ì³ñÿöü\n";
    cin >> data2;
    cout << "Ââåä³òü ð³ê\n\n";http://schemas.microsoft.com/developer/msbuild/2003
    cin >> data3;
    goto obhod;
    }
 
    if(n=1){
    cout << "Â³äðåäàãóéòå ³ìÿ\n";
    cin >> name1;
    cout << "Â³äðåäàãóéòå Ïð³çâèøùå\n";
    cin >> name2;
    cout << "Â³äðåäàãóéò ïî áàòüêîâ³\n";
    cin >> name3;
    cout << "Â³äðåäàãóéòå ñòàòü\n";
    cin >> sex;
     cout << "Â³äðåäàãóéòå äåíü\n";
    cin >> data1;
    cout << "Â³äðåäàãóéòå ì³ñÿöü\n";
    cin >> data2;
    cout << "Â³äðåäàãóéòå ð³ê\n\n";
    cin >> data3;
    }
    obhod:
       n=1;
    }
};
class Student : public Human
{
 private:
    int zalik,dets,data4,data5,data6,n,data1,data2,data3;
    string sex;
    string name1;
    string name2;
    string name3;
 public:
     void input1(){
    cout << endl <<"íîìåð çàë³êîâî¿ êíèæêè: ¹"<< zalik <<endl;
    cout <<"ê³ëüê³ñòü äèñöèïë³í ùî âèâ÷àþòüñÿ: "<< dets <<endl;
    cout <<"Äàòà âñòóïó: "<< data4 <<"."<< data5 <<"."<< data6 <<endl;
    }
  void output1(){
    if(n!=1){
    cout << "Ââåä³òü íîìåð çàë³êîâî¿ êíèæêè\n";
    cin >> zalik;
    cout << "Ââåä³òü ê³ëüê³ñòü äèñöèïë³í ùî âèâ÷àþòüñÿ\n";
    cin >> dets;
    cout << "Ââåä³òü äåíü âñòóïó\n";
    cin >> data4;
    cout << "Ââåä³òü ì³ñÿöü âñòóïó\n";
    cin >> data5;
    cout << "Ââåä³òü ð³ê âñòóïó\n\n";
    cin >> data6;
    goto obhod;
    }

    if(n=1){
    cout << "Â³äðåäàãóéòå íîìåð çàë³êîâî¿ êíèæêè\n";
    cin >> zalik;
    cout << "Â³äðåäàãóéòå ê³ëüê³ñòü äèñöèïë³í ùî âèâ÷àþòüñÿ\n";
    cin >> dets;
    cout << "Â³äðåäàãóéòå äåíü âñòóïó\n";
    cin >> data4;
    cout << "Â³äðåäàãóéòå ì³ñÿöü âñòóïó\n";
    cin >> data5;
    cout << "Â³äðåäàãóéòå ð³ê âñòóïó\n\n";
    cin >> data6;
    }
    obhod:
       n=1;
    }
};
int main(){
   setlocale(LC_ALL, "Ukrainian");
Human Human;
Student Student;
   int p = 1;
   int mod;
   int obhod2=1;
   int obhod1=1;
while (p = 1)
    {
            cout <<endl<< " Âèáåðiòü Äiþ\n";
            cout << " 1.Ðåäàãóâàííÿ ³íôîðìàö³þ ïðî ñòóäåíòà\n";
            cout << " 2.²íôîðìàö³ÿ\n";
            cout << " 3.Ðåäàãóâàòè îñîáñò³ äàí³ ñòóäåíòà\n";
            cin >> mod;
               if (mod == 1) {
                Student.output1();
                obhod1++;
               }
               if (mod == 2) {
                    if(obhod2!=1){
                Human.input();
                    }
                    if(obhod1!=1){

                Student.input1();
                    }
                    else{
                        cout<<"Íåìàº äàííèõ"<<endl;
                    }
               }
               if (mod == 3) {
               Human.output();
               obhod2++;
               }
    }
}

