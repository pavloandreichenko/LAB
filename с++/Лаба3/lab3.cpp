#include <iostream>
#include <iomanip>


using namespace std;
class Time{
private:
int hour;
int minutes;
int seconds;

public:
Time (int hour,int minutes,int seconds){

if(hour<10){
cout << std::setfill('0') << std::setw(2) << hour<< ":";
}
else if(hour<=24){
cout << hour<< ":";
}
else{
  hour=0;
  cout << std::setfill('0') << std::setw(2) << hour<< ":";
}


if(minutes<10){
cout << std::setfill('0') << std::setw(2) << minutes<< ":";
}
else if(minutes<=60){
cout << minutes<< ":";
}
else{
  minutes=0;
  cout << std::setfill('0') << std::setw(2) << minutes<< ":";
}

if(seconds<10){
cout << std::setfill('0') << std::setw(2) << seconds;
}
else if(seconds<=60){
cout << seconds;
}
else{
  seconds=0;
  cout << std::setfill('0') << std::setw(2) << seconds;
}

}

};
int main(){
  int c,a,b,a1,b1,c1;
  Time obj1(a,b,c);
cout<<"\nВедіть час\n";
cin>>a1>>b1>>c1;
a=a+a1;
b=b+b1;
c=c+c1;
Time obj2(a,b,c);
}
