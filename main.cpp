//kwadrat, romb, równoległobok, trójkąt, trapez oraz koło
#include <iostream>
#include "math.h"
using namespace std;

class Figure {
    public:
       virtual void pole() {
            cout << "Pole:" << endl;
        }
       virtual void obwod(){
            cout<<"Obwod:"<<endl;
        }
    };

    class Kwadrat: public Figure{
        float a;
    public:
        Kwadrat(float x){
            a = x;
        }
        void pole(){
            cout<<"Pole Kwadratu:"<<a*a<<endl;
        }
        void obwod(){
            cout<<"Obwod Kwadratu:"<<a*4<<endl;
        }
    };

class Romb: public Figure{
    float a;
    float h;
public:
    Romb(float x1, float x2){
        a = x1;
        h = x2;
    }
    void pole(){
        cout<<"Pole Romba:"<<a*h<<endl;
    }
    void obwod() {
        cout << "Obwod Romba:" << a * 4 << endl;
    }
};
    class Rownolieglobok: public Figure{
        float a;
        float b;
        float ha;
    public:
        Rownolieglobok(float x1, float x2, float x3){
            a = x1;
            b = x2;
            ha = x3;
        }
        void pole(){
            cout<<"Pole rownoliegloboku:"<<a*ha<<endl;
        }
        void obwod(){
            cout<<"Obwod rownoliegloboku:"<<2*a+2*b<<endl;
        }
    };
class Trojkontrowbocz: public Figure{
    float a;
public:
    Trojkontrowbocz(float x1){
        a = x1;
    }
    void pole(){
        cout<<"Pole Trojkonta rownbocz:"<<(a*a*sqrt(3))/4<<endl;
    }
    void obwod(){
        cout<<"Obwod Trojkonta rownbozc:"<<a*3<<endl;
    }
};
class Trapez: public Figure{
    float a;
    float b;
    float c;
    float d;
    float h;
public:
    Trapez(float x1, float x2, float x3, float x4, float x5){
        a = x1;
        b = x2;
        c = x3;
        d = x4;
        h = x5;
    }
    void pole(){
        cout<<"Pole Trapeza:"<<((a+b)*h)/2<<endl;
    }
    void obwod(){
        cout<<"Obwod Trapeza:"<<a+b+c+d<<endl;
    }
};
class Kolo: public Figure{
    float r;
    float pi;
public:
    Kolo(float x1, float x2){
        r = x1;
        pi = x2;
    }
    void pole(){
        cout<<"Pole Kolo:"<<pi*r*r<<endl;
    }
    void obwod(){
        cout<<"Obwod Kolo:"<<2*pi*r<<endl;
    }
};
void Obliczenia(Figure *wsk){
    wsk->pole();
    wsk->obwod();
}

int main() {
Figure *wsk;
    Kwadrat k(3);
    Obliczenia(&k);
    Romb r(4,2);
    Obliczenia(&r);
    Rownolieglobok rb(1,2,3);
    Obliczenia(&rb);
    Trojkontrowbocz tr(5);
    Obliczenia(&tr);
    Trapez tz(2,3,4,5,6);
    Obliczenia(&tz);
    Kolo ko(2,3.14);
    Obliczenia(&ko);
    return 0;
}
