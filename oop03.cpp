#include<iostream>

using namespace std;

class Country
{
    private:
        string languageName;
        string capitalName;
        string internationalCode;
        double countryPopulation;
        char letter;
        int phoneCode;
        
    public:
        Country(string capital, string code);//capital and code constructor
        Country();//empty constructor
        Country(string capital);//captial constructer
        Country(double population);//population constructer
        Country(string capital, char aLetter, string language);//capital, letter and language constructor
        Country(int phone);//phoneCode constructor
        ~Country();
        
        
        
};

Country::Country(string capital, string code)
{
            capitalName= capital;
            internationalCode= code;
            cout<<"You called capital and code constructor! "<<endl;
}
Country::Country()
{
    cout<<"You called empty constructor! "<<endl;
}
Country::Country(string capital)
{
    capitalName= capital;
    cout<<"You called captial constructer! "<<endl;
}
Country::Country(double population)
{
    countryPopulation=population;
    cout<<"You called population constructer! "<<endl;
}

Country::Country(string capital, char aLetter, string language)
{
    capitalName= capital;
    letter= aLetter;
    languageName= language;
    cout<<"You called capital, letter and language constructor! "<<endl;
}
Country::Country(int phone)
{
    phoneCode=phone; 
     cout<<"You called phoneCode constructor! "<<endl;  
}
Country::~Country()
{
    cout<<"You called destructor! "<<endl;
}


int main()
{
    
    Country obj1("Istanbul", "TR");
    Country obj2;
    Country obj3("Istanbul");
    Country obj4(8000.85);
    Country obj5("Ankara",'A',"Turkish");
    Country obj6(90);
    
    
    
    return 0;
}
