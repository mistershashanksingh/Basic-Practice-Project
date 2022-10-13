#include<iostream>
                   
using namespace std;
                    
        
void val(int trunc);
void ref(int* fphi, int* mlambda);
int main(int argc, char const *argv[])
{
    system("cls");
    int fin, swp1, swp2;
    /*code*/
    cout<<"Function called by value method:- \nEnter number to get fibonacci =";
    cin>>fin;
    val(fin);
    cout<<"Function called by reference method:- \nEnter 1st number for swap =";
    cin>>swp1;
    cout<<"Enter 2nd number for swap =";
    cin>>swp2;
    cout<<"Value before swapping \n1st number ="<<swp1<<" \n2nd number ="<<swp2;
    ref(&swp1, &swp2);
    cout<<"\nValue after swapping \n1st number ="<<swp1<<"\n2nd number ="<<swp2;

    return 0;
}
void val(int trunc) // function var virutally allocate momory
// This function is an illustration of loop 
{
    int fib, prid = 0, nxt = 1;
    for (int i = 0; i < trunc; i++)
    {
        /* code */
        cout<<prid<<endl;
        fib = prid + nxt;
        prid = nxt;
        nxt = fib;
    }
}
void ref(int* fphi, int* mlambda) //function var called by reference value of memory
// This function is an illustration of recursion
{
    int temp = *mlambda;
    *mlambda = *fphi;
    *fphi =  temp;
    
}