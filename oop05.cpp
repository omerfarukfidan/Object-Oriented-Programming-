//NESNE VÝZE 1. SORU TEMEL
#include<iostream>


using namespace std;

class Ogrenci
{
    private:
        int OgrenciNo;
        string OgrSinif="1. Sinif";
    
    public:
        Ogrenci(int no);
        Ogrenci(int no, string sinif);
        
        void OgrenciBilgileri();
};

Ogrenci::Ogrenci(int no)
{
    OgrenciNo=no;
}
Ogrenci::Ogrenci(int no, string sinif)
{
    OgrenciNo=no;
    OgrSinif=sinif;
}
 void Ogrenci::OgrenciBilgileri()
    {
        cout<<"Ogrenci No: "<<OgrenciNo<<endl;
        cout<<"Ogrenci Sinif: "<<OgrSinif<<endl;
    }
int main()
{
    
   Ogrenci obj1(30119020);
   Ogrenci obj2(30119020 ,"2. Sinif"); 
   obj1.OgrenciBilgileri();
   obj2.OgrenciBilgileri(); 
    
    
    
    return 0;
}
