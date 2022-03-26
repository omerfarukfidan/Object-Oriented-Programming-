#include<iostream>

using namespace std;

class muhendis
{
 	private:
		int tecrube;
		
 	public:
		void setTecrube(int tecrubex)
		{
			tecrube=tecrubex;
 		}
		
		int getTecrube()
		{
			
			return tecrube;
					  } 	     	
 	
};
//Base(parent) class
class sirketCalisani
{
	private:
		string ad;
		string soyad;
		int maas;
		
	public:
		sirketCalisani()//constructer
		{
			cout<<"Bu bir sirket calisanidir\n";
		}
		sirketCalisani(string adx, string soyadx, int maasx)
		{
			ad=adx;
			soyad=soyadx;
			maas=maasx;
			cout<<getAd()<<" "<<getSoyad()<<" bir sirket calisanidir ve maasi "<<getMaas()<<" dolardir."<<endl;
		}
		
		//altta tanımlanan get set metodlarıyla encapsulation yapilmiştir
		
		void setMaas(int maasx)
		{
			maas=maasx;
		}
		int getMaas()
		{
			return maas;
		}
		
		void setAd(string adx)
		{
			ad=adx;
		}
		string getAd()
		{
			return ad;
		}
		
		void setSoyad(string soyadx)
		{
			soyad=soyadx;
		}
		string getSoyad()
		{
			return soyad;
		}
};


//derived(child) class
class bilgisayarMuhendisi: public sirketCalisani, public muhendis
{
	private:
		string departman;
		string kidem;
	public:
		
	
};


int main()
{
	
	sirketCalisani calisan1;// parametresiz constructerın objecti parantezsiz çağrılır
	sirketCalisani calisan2("omer","fidan",10000);

	bilgisayarMuhendisi calisan3;
	calisan3.setTecrube(10);
	cout<<"Bu calisanin tecrubesi "<<calisan3.getTecrube()<<" yildir."<<endl;


	bilgisayarMuhendisi::sirketCalisani calisan4("omer","fidan",10000);//kalitim yoluyla parent classda bulunan constructer aracılığıyla nesne oluşturma
	cout<<calisan4.getAd();//olusturulan nesnede encapsulation kullanınımı
	
	
	
	
	return 0;
}
