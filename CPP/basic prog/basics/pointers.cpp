#include<iostream>
                   
using namespace std;
int main(int argc, char const *argv[])
{
    /*code for pointers datatype in cpp*/ 
    // variable is assign and then its address
    int ad = 4;
    // How to assign a pointer data type is shown below
    int* f = &ad;

    system("cls");
    // address of an operator
    cout<<"- The address of the variable is :-"<<f<<endl;
    // derefrence of an operator i.e. storing of the value of that variable
    cout<<"- The value stored in that address is :-"<<*f<<"\n";
    return 0;
}