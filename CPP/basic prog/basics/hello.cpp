#include<iostream>
using namespace std; //using fuction with standard(std) namespace instead of using std in every we'll use it @ a place;

// This is my global variable ||*when local variable  is unavalibile 
// int i, j, k ;
int main(int argc, char const *argv[])
{
    /*code for I/O and console "clear== cls" (for win os)*/ 
    int  i, j, k;   
    // This is local variable
    system("cls");
    cout<<"\nHey there VS code is completly setup to go for c++" <<"\n\nEnter 1st number : ";
    cin>>i;
    cout<<endl;
    cout<<"Enter 2nd number : ";
    cin>>j;
    k=i+j;
    cout<<"\nThe sum of two number = "<<k<<"\n";
    
    return 0;
}
