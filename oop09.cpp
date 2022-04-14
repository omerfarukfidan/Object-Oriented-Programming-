//NESNE VÝZE 5. çok bicimlilik
//OMER FARUK FÝDAN
#include<iostream>


using namespace std;

class Sporcu
{
    private:
        string Isim;
        int SporcuNo;
    public:
        Sporcu(string Isim, int SporcuNo);
            
};

Sporcu::Sporcu(string Isim, int SporcuNo)
{
    this->Isim = Isim;
    this->SporcuNo = SporcuNo;
}

class Basketbolcu: public Sporcu
{
    
};

class Futbolcu: public Sporcu
{
    private:
        string mevki;
    public:
        Futbolcu(string mevki,string Isim, int SporcuNo):Sporcu(Isim,SporcuNo)
        {
            this->mevki=mevki;
        };


};



class Kaleci: public Futbolcu
{
   private:
    int Boy;
   public:
       

     
};
int main()
{
    
    
    
    
    return 0;
}
