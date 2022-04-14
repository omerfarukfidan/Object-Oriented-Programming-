#include<iostream>


using namespace std;

// base class
class father
{
    private:
        int numberOfChild;
    protected:
        string name;
    public:
        
        void setNumberOfChild(int numberOfChild1)
    {
        numberOfChild=numberOfChild1;    
    }  
    
    int getNumberOfChild()
    {
        return numberOfChild;
    }    
        
};

// sub class derived from a single base classes
class child: public father//father c
{
  public:
    void setName(string name1)
    {
        name=name1;    
    }  
    
    string getName()
    {
        return name;
    }
};
int main()
{
    father obj1;
    obj1.setNumberOfChild(1);
    cout<<"This father has "<<obj1.getNumberOfChild()<<" child."<<endl;
    child obj2; // Creating object of sub class will invoke the constructor of base classes
    obj2.setName("omer");
    cout<<"Child's name is "<<obj2.getName()<<endl;
    
    
    
    
    return 0;
}
