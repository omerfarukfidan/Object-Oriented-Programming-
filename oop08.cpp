//NESNE VÝZE 4. SORU KALITIM VE ARAYÜZ
//OMER FARUK FÝDAN
#include<iostream>


using namespace std;

class YasGoster
{
    public:
       
       virtual int Yas()=0;
};


class Insan : public YasGoster //implement
{
    protected:
        string TcNo;
        int yas=20;
    public:
        Insan(string tcNo);
        int Yas();
        
};

Insan::Insan(string tcNo)
{
    TcNo=tcNo;
}
Insan::Yas()
{
    return yas;
}


class Ogrenci: public Insan //inherit
{
    private:
        string OgrNo;
    public:
        Ogrenci(string tcNo):Insan(tcNo){};
        int Yas();
        void setOgrNo(string ogrNo);
        void kendiniTanit(string ogrNo, int yas1, string tcNo1);
};


Ogrenci::Yas()
{
    return yas;
}
void Ogrenci::setOgrNo(string ogrNo)
{
    OgrNo=ogrNo;
}

void Ogrenci::kendiniTanit(string ogrNo, int yas1, string tcNo1)
{
    OgrNo=ogrNo;
    cout<<"Ogrenci No: "<<OgrNo<<endl;
    cout<<"Ogrenci Yas: "<<yas1<<endl;
    cout<<"Tc No: "<<tcNo1<<endl;
    
}


int main()
{
    
    Ogrenci obj1("");
	obj1.setOgrNo("030120118");
	obj1.kendiniTanit("030120118",obj1.Yas(),"11111111");
    
    
    return 0;
}
