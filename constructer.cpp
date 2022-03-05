#include<iostream>

using namespace std;

class Calisan
{
	private:
		string ad;
		string unvan;
		float maas;
	public:
	Calisan()
	{
		 ad= "omer";
		unvan= "manager";
		 maas= 100000;
	};
	Calisan(string ad1, string unvan1)	
	{
		ad=ad1;
		unvan=unvan1;
		maas=-1;
			  }		  
  void bilgiGoster()
    {
	   
	   cout<<"ad: "<<ad<<endl;
	   cout<<"unvan: "<<unvan<<endl;
	   cout<<"maas: "<<maas<<endl;
	
	}	
};

int main()
{
 	Calisan x ("omer","cto");
 	x.bilgiGoster();
 	Calisan y;
 	y.bilgiGoster();
	 
  	  	
	
	
	
	return 0;
}
