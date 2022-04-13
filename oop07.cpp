//NESNE VÝZE 3. SORU ARKADAÞ
//OMER FARUK FÝDAN
#include<iostream>


using namespace std;

class Teknopark
{
    private:
        int kurulusYili;
        string UniversiteAdi;
        string ilce;
    public:
        
        Teknopark() : kurulusYili(2001),UniversiteAdi("IZU"),ilce("Kucukcekmece"){};
        friend void Bilgilerim(Teknopark T1);
        
};

void Bilgilerim(Teknopark T1) 
{
    
   cout<<"Kurulus yili: "<<T1.kurulusYili<<endl;
   cout<<"Universite adi: "<<T1.UniversiteAdi<<endl;
   cout<<"Ilce: "<<T1.ilce<<endl;
}


int main()
{
    
    Teknopark A;
    Bilgilerim(A);
    
    
    return 0;
}
