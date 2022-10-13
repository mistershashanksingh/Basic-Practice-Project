#include<iostream>
                   
using namespace std;
int main(int argc, char const *argv[])
{
    int n,n1,arm=0,mod;
    system("cls");
    /*code*/
    //cout<<"Enter to check Number is an Arm strong = ";
    cin>>n;

    n1=n;

    while (n!=0)
    {
        /* code */
        mod = n%10;
        arm = arm+(mod*mod*mod);
        n =n/10;
    }
    if (n1==arm)
    {
        /* code */
        cout<<"\n It is An Armstrong number\n"; 
    }
    else
    {
        /* code */
        cout<<"\n It is not an Armstrong number\n";
    }
    
 
    return 0;
}