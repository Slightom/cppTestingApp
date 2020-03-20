#include <iostream>
#include<cstdlib>

using namespace std;

class Liczba{
public:
    Liczba(){}
    Liczba(float x){
        wartosc=x;}
    Liczba(const Liczba &liczba){
        wartosc=liczba.wartosc;}

    float get_val(){
        return wartosc;}
    void set_val(float y){
        wartosc=y;}

    virtual void wczytaj(){
        cin>>wartosc;}
    virtual void wypisz(){
        cout<<"wartosc wynosi: "<<wartosc<<endl;}

    ~Liczba(){}
private:
    float wartosc;};

class Zespolona: public Liczba{
    public:
        Zespolona(){}
        Zespolona(float re_x, float im_x){
            re = re_x;
            im = im_x;}
        Zespolona(Zespolona &zespolona){
            re = zespolona.re;
            im = zespolona.im;}
        ~Zespolona(){};

    float get_re(){
        return re;}
    void set_re(float re_x){
        re = re_x;}
    float get_im(){
        return im;}
    void set_im(float im_x){
        im = im_x;}

    void wczytaj(){
        cin>>re;
        cin>>im;}
    void wypisz(){
        cout<<"Re:"<<re<<", Im:"<<im<<endl;}

//    Zespolona operator+(Zespolona &z)
//    {
//        return Zespolona(get_re()+z.get_re(), get_im()+z.get_im());
//    }

    private:
        float re;
        float im;
    };

int main()
{
   Liczba L1(4.0);
   Zespolona L2(3,5); Zespolona L3(2,5);
   Zespolona *tab[2];
   tab[0] = &L2; tab[1] = &L3;

   L1.wczytaj();
   cout<<L1.get_val()<<endl;
   L1.set_val(100.2);
   L1.wypisz();

   L2.wczytaj();
   cout<<L2.get_re()<<" "<<L2.get_im()<<endl;
   L2.set_re(17.2); L2.set_im(18.4);
   L2.wypisz();

    return 0;
}


