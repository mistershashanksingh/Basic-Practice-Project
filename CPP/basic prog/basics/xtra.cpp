#include<iostream>
#include<string>
                   
using namespace std;
                    
 /*class car           // This is a class..... car
 {
 private:
     int pI;
     string pS;         //encapsulation of data
 public:
    //  car( args );
    //  ~car();
    string brand, name, speed;
    double pr;
    
    void setData(int prodId, string prodSr); // Data get abstracted & Declaration Below
    void prtData() // Declaration here
    {
         cout<<"car Product Id :-"<<pI<<endl;
         cout<<"car Product Sr :-"<<pS<<endl;
         cout<<"car Brand :-"<<brand<<endl;
         cout<<"car Name :-"<<name<<endl;
         cout<<"car Speed :-"<<speed<<endl;
         cout<<"car Price :-"<<pr<<" million $\n";
         cout<<"_____________eop_______________\n";

    
    }
 
 };
 void car :: setData(int prodId, string prodSr)  // Declaration of abstracted data
 {
     // encapsulated data 
     pI = prodId;
     pS = prodSr;
 }
                    
int main(int argc, char const *argv[])
{
    system("cls");
    //code//
    car Mustang ;          // Mustang is an object of class car
    Mustang.setData(2020, "ij2838");
    Mustang.brand = "ford";
    Mustang.name = "shalinCobra";
    Mustang.speed = "250/h";
    Mustang.pr = 1.34;
    Mustang.prtData();
    

    return 0;
}header file lagaaa..........*/
int main(int argc, char const *argv[])
{
    system("cls");
    /* code */
    int arr[3] [2] = {{3,4},{5,6},{7,8}};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            /* code */
        cout<<"Element arr["<<i<<"] and arr["<<j<<"] value = "<<arr[i] [j]<<endl;
        }
        
    }
    
    return 0;
}
