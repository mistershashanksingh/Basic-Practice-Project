#include<iostream>
#include<string>
                   
using namespace std;
                    
 class laptop            // This is a class..... laptop
 {
 private:
     /* data */
     int pI;
     string pS;         //encapsulation of data
 public:
    //  laptop(/* args */);
    //  ~laptop();
    string brand, name, processor, ram;
    double pr;
    
    void setData(int prodId, string prodSr); // Data get abstracted & Declaration Below
    void prtData() // Declaration here
    {
         cout<<"Laptop Product Id :"<<pI<<endl;
         cout<<"Laptop Product Sr :"<<pS<<endl;
         cout<<"Laptop Brand :"<<brand<<endl;
         cout<<"Laptop Name :"<<name<<endl;
         cout<<"Laptop Processor :"<<processor<<endl;
         cout<<"Laptop Ram :"<<ram<<endl;
         cout<<"Laptop Price :Rs."<<pr<<endl;
         cout<<"_________________________"<<endl;
    
    }
 
 };
 void laptop :: setData(int prodId, string prodSr)  // Declaration of abstracted data
 {
     // encapsulated data 
     pI = prodId;
     pS = prodSr;
 }
                    
int main(int argc, char const *argv[])
{
    system("cls");
    /*code*/
    laptop macair ;          // macair is an object of class laptop
    system("cls");
    macair.setData(2020, "oofj34");
    macair.brand = "Apple";
    macair.name = "Macbook pro_13";
    macair.processor = "m1";
    macair.ram = "8 gb";
    macair.pr = 120909.78;
    macair.prtData();
    

    return 0;
}