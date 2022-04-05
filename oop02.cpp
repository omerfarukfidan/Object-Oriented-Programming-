#include<iostream>


using namespace std;


// code complete ctrl+space
// Base class
class animal
{
	
	public:
	    void animalSound();//interface
	             								   			
	                           
	
	
	
  public:
      
      cat()
      {
          cout<<"I am a cat :)"<<endl;
      }
      void animalSound()
        {
            cout<<"Meow Meow!!"<<endl;//overriding
        }
    
};

class dog: public animal
{
  public:
      void animalSound()
        {
            cout<<"wof wof!"<<endl;//overriding
        }
      
     
     
};

int main()
{
	
	
 cat catty;
 catty.animalSound();//polymorphisim
 
 dog tj;
 tj.animalSound();//polymorphisim
	
	return 0;
}
