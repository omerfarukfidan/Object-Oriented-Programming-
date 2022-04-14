//NESNE VÝZE 2. SORU BAÐIMLILIK
//OMER FARUK FÝDAN
#include<iostream>


using namespace std;



class Kullanici
{
    private:
        string Uyelik;
        
    public:
    string UyelikBilgi(string uyelikBilgisi)
    {
        Uyelik=uyelikBilgisi;
        return Uyelik;
    }         
};


class Login: public Kullanici
{
    
    public:
    void girisYap(string uyelikBilgisi)
    {
        Kullanici KI;
       
        if( KI.UyelikBilgi(uyelikBilgisi)=="Uye")
        {
            cout<<"Basarili giris."<<endl;
        }
        else if(KI.UyelikBilgi(uyelikBilgisi)=="UyeDegil")
        {
            cout<<"Basarisiz giris."<<endl;
        }
        else
            cout<<"Hatali bilgi"<<endl;
    }
    
};

int main()
{
    
    Login login1;
    login1.girisYap("UyeDegil");
    
    Login login2;
    login2.girisYap("Uye");
    
    Login login3;
    login3.girisYap("omer");
    return 0;
}
