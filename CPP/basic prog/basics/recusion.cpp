#include<iostream>
                   
using namespace std;
int arith(int n);
int main(int argc, char const *argv[])
{
    /*code for recursion*/
    system("cls");
    cout<<"This is a recursion program :\n";
    cout<<"Enter a Number:";
    int n;
    cin>>n;
    cout<<"The Sum of given Number upto 0 :  "<<arith(n)<<endl;
 
    return 0;
}

// The recursion of Program start from here
int arith(int n)
{
    if (n==0)
    {
        /* code */
        return 0;
    }
    int prevSum = arith(n-1);
    
    return n + prevSum; 
    
}