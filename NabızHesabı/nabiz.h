#include <iostream>
using namespace std;

class nabiz{
    private:
        std::string isim;
        std::string soyisim;
        int dogumTarihiGun;
        int dogumTarihiAy;
        int dogumTarihiYil;
    public:
        nabiz();
        nabiz(std::string,std::string,int,int,int);
        void setIsim(std::string);
        void setSoyisim(std::string);
        void setGun(int);
        void setAy(int);
        void setYil(int);
        std::string getIsim();
        std::string getSoyisim();
        int getGun();
        int getAy();
        int getYil();
        int getYas();
        void getHedefNabiz();
        int getMaksimumNabiz();
        void printInsan();

};

        nabiz::nabiz(){
            cout  <<    "Default nabiz constructor cagirildi"<<endl;
            isim ="";
            soyisim="";
            dogumTarihiGun=0;
            dogumTarihiAy=0;
            dogumTarihiYil=0;
        }

        nabiz::nabiz(std::string isim ,std::string soyisim ,int gun,int ay,int yil){
            setIsim(isim);
            setSoyisim(soyisim);
            setGun(gun);
            setAy(ay);
            setYil(yil);
        }

        void nabiz::setIsim(std::string isim){
            this->isim=isim;
        }

        void nabiz::setSoyisim(std::string soyisim){
            this->soyisim=soyisim;

        }

        void nabiz::setGun(int gun){
            if(gun>0 && gun<=31) this->dogumTarihiGun=gun;
            else cout <<"Girilen gun degeri gecersizdir!!" <<endl;
        }

        void nabiz::setAy(int ay){
            if(ay>0 && ay<=12) this->dogumTarihiAy=ay;
            else cout <<"Girilen ay degeri gecersizdir!!" <<endl;

        }

        void nabiz::setYil(int yil){
            if(yil>0) this->dogumTarihiYil=yil;    
            else cout <<"Girilen yil degeri gecersizdir!!" <<endl;

        }

        std::string nabiz::getIsim(){
            return isim;
        }

        std::string nabiz::getSoyisim(){
            return soyisim;
        }

        int nabiz::getGun(){
            return dogumTarihiGun;
        }

        int nabiz::getAy(){
            return dogumTarihiAy;
        }

        int nabiz::getYil(){
            return dogumTarihiYil;
        }

        int nabiz::getYas(){
            return 2022-getYil();
        }

        void nabiz::getHedefNabiz(){
            int altSinir = getMaksimumNabiz()* 0.5;
            int ustSinir = getMaksimumNabiz()* 0.8;

            cout<<"Nabiz alt deger: " << altSinir <<endl;
            cout<<"Nabiz üst deger: " << ustSinir <<endl;

        }

        int nabiz::getMaksimumNabiz(){
            return 220 - getYas();

        }

        void nabiz::printInsan(){
            cout <<"Isim: "<< getIsim();
            cout <<"Soyisim: "<< getSoyisim();
            cout<<"Yas :"<<getYas();
            cout<<"Maksimum Nabiz :"<<getMaksimumNabiz();

            getHedefNabiz();
        }